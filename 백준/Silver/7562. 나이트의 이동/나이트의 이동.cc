#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int t, l, x, y, tX, tY;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    for (int _=0; _<t; _++) {
        int vis[310][310] = {};

        cin >> l;
        for (int i=0; i<l; i++) {
            fill(vis[i], vis[i]+l, -1);
        }

        cin >> x >> y;
        cin >> tX >> tY;

        queue<pair<int, int>> Q;
        vis[x][y] = 0;
        Q.push({x, y});
        
        while(vis[tX][tY] == -1) {
            pair<int, int> cur = Q.front();
            Q.pop();

            for (int dir=0; dir<8; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if (vis[nx][ny] >= 0) continue;

                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
            }
        }
        cout << vis[tX][tY] << '\n';
    }

    return 0;
}