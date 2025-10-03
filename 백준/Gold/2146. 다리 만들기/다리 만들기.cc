#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
int board1[110][110];
int board2[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> board1[i][j];
        }
    }

    int cnt = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (board2[i][j] || board1[i][j] == 0) continue;

            queue<pair<int, int>> Q;
            Q.push({i, j});
            board2[i][j] = cnt;

            while(!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir=0; dir<4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (board2[nx][ny] || board1[nx][ny] == 0) continue;

                    Q.push({nx, ny});
                    board2[nx][ny] = cnt;
                }
            }

            cnt++;
        }
    }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << board2[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    int m = 10000;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (board2[i][j] == 0) continue;

            int dist[110][110];
            for (int x=0; x<n; x++) {
                for (int y=0; y<n; y++) {
                    dist[x][y] = 0;
                }
            }

            queue<pair<int, int>> Q;
            Q.push({i, j});
            dist[i][j] = 0;

            while (!Q.empty()) {
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int dir=0; dir<4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (board2[nx][ny] != 0 && board2[nx][ny] != board2[i][j]) {
                        m = min(m, dist[cur.X][cur.Y]);
                    }
                    if (dist[nx][ny]) continue;

                    Q.push({nx, ny});
                    dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                }
            }
        }
    }
    cout << m;

    return 0;
}