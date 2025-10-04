#include <bits/stdc++.h>
using namespace std;

int n, m, k;
string str;
int board[1010][1010];
int dist[1010][1010][15][2];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++)
            board[i][j] = str[j]-'0';
    }

    queue<tuple<int, int, int, bool>> Q;
    dist[0][0][0][true] = 1;
    Q.push({0, 0, 0, 1});

    while (!Q.empty()) {
        tuple<int, int, int, bool> cur = Q.front();
        int x = get<0>(cur);
        int y = get<1>(cur);
        int cnt = get<2>(cur);
        bool day = get<3>(cur);
        Q.pop();

        // cout << x << ' ' << y << ' ' << day << "  " << cnt << "      " << dist[x][y][cnt][day] << '\n';

        if (x == n-1 && y == m-1) {
            cout << dist[x][y][cnt][day];
            return 0;
        }

        if (day == true) { // 낮
            for (int dir=0; dir<4; dir++) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

                if (board[nx][ny] == 0) {
                    if (dist[nx][ny][cnt][false] || dist[nx][ny][cnt][true]) continue;
                    dist[nx][ny][cnt][false] = dist[x][y][cnt][day] + 1;
                    Q.push({nx, ny, cnt, false});

                } else if (cnt < k) {
                    if (dist[nx][ny][cnt+1][false] || dist[nx][ny][cnt+1][true]) continue;
                    dist[nx][ny][cnt+1][false] = dist[x][y][cnt][day] + 1;
                    Q.push({nx, ny, cnt+1, false});
                }
            }
        } else { // 밤
            for (int dir=0; dir<4; dir++) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (dist[nx][ny][cnt][true] || board[nx][ny] == 1) continue;

                dist[nx][ny][cnt][true] = dist[x][y][cnt][day] + 1;
                Q.push({nx, ny, cnt, true});
            }

            dist[x][y][cnt][true] = dist[x][y][cnt][day] + 1;
            Q.push({x, y, cnt, true});
        }
    }

    cout << -1;

    return 0;
}