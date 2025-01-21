#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[301][301];
    int prefix[301][301] = {};

    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            cin >> arr[i][j];
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    int max_val = -(1 << 30);
    for (int s=1; s<=N; s++) {
        for (int i=1; i<=N-s+1; i++) {
            for (int j=1; j<=N-s+1; j++) {
                int x = i+s-1;
                int y = j+s-1;
                max_val = max(max_val, prefix[x][y] - prefix[x][j-1] - prefix[i-1][y] + prefix[i-1][j-1]);
            }
        }
    }
    cout << max_val;

    return 0;
}