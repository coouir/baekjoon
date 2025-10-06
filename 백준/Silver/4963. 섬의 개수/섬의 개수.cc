#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board[55][55];
int vis[55][55];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> m >> n;
        if (n == 0 && m == 0) break;

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> board[i][j];
                vis[i][j] = 0;
            }
        }

        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (vis[i][j] || board[i][j] == 0) continue;

                queue<pair<int, int>> Q;
                Q.push({i, j});
                vis[i][j] = ++cnt;

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<8; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >=n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] || board[nx][ny] == 0) continue;

                        Q.push({nx, ny});
                        vis[nx][ny] = cnt;
                    }
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}