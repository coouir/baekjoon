#include <iostream>
#include <algorithm>
using namespace std;

int arr[1010][1010];
int prefix[1010][1010];

int main() {
    int M, N;
    cin >> M >> N;
    for (int i=1; i<=M; i++) {
        for (int j=1; j<=N; j++) {
            cin >> arr[i][j];
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    int L = 0;
    for (int i=1; i<=M; i++) {
        for (int j=1; j<=N; j++) {
            for (int k=0; k<=1000; k++) {
                if (!(i+k <= M && j+k <=N)) break;
                
                int l = prefix[i+k][j+k] - prefix[i+k][j-1] - prefix[i-1][j+k] + prefix[i-1][j-1];
                if (l == 0) {
                    L = max(L, k+1);
                }
            }
        }
    }
    cout << L;

    return 0;
}