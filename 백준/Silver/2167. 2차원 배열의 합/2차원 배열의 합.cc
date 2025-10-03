#include <bits/stdc++.h>
using namespace std;

int n, m, k, i, j, x, y;
int board[310][310];
int prefix[310][310];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin >> board[i][j];
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + board[i][j];
        }
    }
    
    cin >> k;
    while (k--) {
        cin >> i >> j >> x >> y;
        cout << prefix[x][y] - prefix[x][j-1] - prefix[i-1][y] + prefix[i-1][j-1] << '\n';
    }

    return 0;
}