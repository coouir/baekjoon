#include <bits/stdc++.h>
using namespace std;

int n, m, X, Y, x, y;
int dist[510][510];

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cin >> X >> Y;

    queue<pair<int, int>> Q;
    Q.push({X, Y});
    dist[X][Y] = 1;

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir=0; dir<8; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
            if (dist[nx][ny] > 0) continue;

            if (nx == x && ny == y) {
                cout << dist[cur.first][cur.second] << ' ';
            }

            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    for (int i=0; i<m; i++) {
        cin >> x >> y;
        
        cout << dist[x][y] - 1 << ' ';
    }

    return 0;
}