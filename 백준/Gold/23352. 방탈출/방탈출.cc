#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, ans;
int M1 = 0;

int board[55][55];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++)
            cin >> board[i][j];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 0) continue;

            int dist[55][55] = {};
            queue<pair<int, int>> Q;

            dist[i][j] = 1;
            Q.push({i, j});
            
            int M2 = 1;
            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir=0; dir<4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (dist[nx][ny] > 0 || board[nx][ny] == 0) continue;

                    dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                    M2 = max(M2, dist[nx][ny]);
                    Q.push({nx, ny});
                }
            }
            M1 = max(M1, M2);
            // for (int x=0; x<n; x++) {
            //     for (int y=0; y<m; y++) {
            //         if (dist[x][y] == M2) {
            //             cout << '\n';
            //             cout << i << ' ' << j << '\n';
            //             cout << x << ' ' << y << '\n';
            //             cout << board[x][y]+board[i][j] << '\n';
            //             ans = max(ans, board[x][y]+board[i][j]);
            //         }
            //     }
            // }

            // for (int x=0; x<n; x++) {
            //     for (int y=0; y<m; y++) {
            //         cout << dist[x][y] << ' ';
            //     }
            //     cout << '\n';
            // }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 0) continue;

            int dist[55][55] = {};
            queue<pair<int, int>> Q;

            dist[i][j] = 1;
            Q.push({i, j});
            
            int M2 = 1;
            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir=0; dir<4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (dist[nx][ny] > 0 || board[nx][ny] == 0) continue;

                    dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                    M2 = max(M2, dist[nx][ny]);
                    Q.push({nx, ny});
                }
            }
            
            if (M1 != M2) continue;

            for (int x=0; x<n; x++) {
                for (int y=0; y<m; y++) {
                    if (dist[x][y] == M2) {
                        ans = max(ans, board[x][y]+board[i][j]);
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}