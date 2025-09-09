#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int m, n;
int board[1010][1010];
int dist[1010][1010];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;

    cin >> m >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];

            if (board[i][j] == 1) {
                dist[i][j] = 0;
                Q.push({i, j});
            } else {
                dist[i][j] = -1;
            }
        }
    }

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] == -1 && board[nx][ny] == 0) {
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
            }
        }
    }

    bool check = true;
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(dist[i][j] == -1 && board[i][j] != -1) check = false;
            ans = max(ans, dist[i][j]);
        }
    }
    
    if (check) {
        cout << ans;
    } else {
        cout << -1;
    }

    return 0;
}