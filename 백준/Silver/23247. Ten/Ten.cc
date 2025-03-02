#include <iostream>
using namespace std;

int arr[310][310];
int prefix[310][310];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> arr[i][j];
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    int cnt = 0;
    for (int x1=1; x1<=m; x1++) {
        for (int y1=1; y1<=n; y1++) {
            for (int x2=x1; x2<=m; x2++) {
                for (int y2=y1; y2<=n; y2++) {
                    int sum_val = prefix[x2][y2] - prefix[x2][y1-1] - prefix[x1-1][y2] + prefix[x1-1][y1-1];
                    if (sum_val == 10) cnt++; 
                    else if (sum_val > 10) break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}