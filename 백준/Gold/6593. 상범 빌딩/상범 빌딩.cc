#include <bits/stdc++.h>
using namespace std;

int l, r, c, z, x, y;
string str;

int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> l >> r >> c;
        if (l == 0 && r == 0 && c == 0) break;

        queue<tuple<int, int, int>> Q;

        char board[35][35][35] = {};
        int dist[35][35][35] = {};
        for (int i=0; i<l; i++) {
            for (int j=0; j<r; j++) {
                for (int k=0; k<c; k++) {
                    cin >> board[i][j][k];

                    if (board[i][j][k] == 'S') {
                        dist[i][j][k] = 0;
                        Q.push({i, j, k});
                    } else if (board[i][j][k] == 'E') {
                        z = i;
                        x = j;
                        y = k;
                        dist[i][j][k] = -1;
                    } else {
                        dist[i][j][k] = -1;
                    }
                }
            }
        }

        while(!Q.empty()) {
            tuple<int, int, int> cur = Q.front();
            Q.pop();

            for (int dir=0; dir<6; dir++) {
                int nz = get<0>(cur) + dz[dir];
                int nx = get<1>(cur) + dx[dir];
                int ny = get<2>(cur) + dy[dir];

                if (nz < 0 || nz >= l || nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
                if (dist[nz][nx][ny] >= 0 || board[nz][nx][ny] == '#') continue;

                dist[nz][nx][ny] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
                Q.push({nz, nx, ny});
            }
        }

        if (dist[z][x][y] == -1) {
            cout << "Trapped!\n";
        } else {
            cout << "Escaped in " << dist[z][x][y] << " minute(s).\n";
        }
        
    }
    return 0;
}