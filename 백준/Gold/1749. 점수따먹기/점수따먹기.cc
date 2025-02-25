#include <iostream>
#include <algorithm>
using namespace std;

long long arr[210][210];
long long prefix[210][210];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            cin >> arr[i][j];

            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    long long max_val = -(1LL << 60);
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            for (int x=i; x<=N; x++) {
                for (int y=j; y<=M; y++) {
                    max_val = max(max_val, prefix[x][y] - prefix[x][j-1] - prefix[i-1][y] + prefix[i-1][j-1]);
                }
            }
        }
    }
    cout << max_val;

    return 0;    
}