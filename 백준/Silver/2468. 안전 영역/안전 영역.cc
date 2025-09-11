#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m=1, M, ans;
int board[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> board[i][j];

            M = max(M, board[i][j]);
        }
    }

    for (int h=0; h<=M+1; h++) {
        int cnt = 0;
        bool vis[110][110] = {};

        queue<pair<int, int>> Q;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j] > h && vis[i][j] == 0) {
                    cnt++;
                    vis[i][j] = 1;
                    Q.push({i, j});

                    while (!Q.empty()) {
                        pair<int, int> cur = Q.front();
                        Q.pop();

                        for (int dir=0; dir<4; dir++) {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];

                            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                            if (vis[nx][ny] || board[nx][ny] <= h) continue;

                            vis[nx][ny] = 1;
                            Q.push({nx, ny});
                        }
                    }
                }
            }
        }

        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}