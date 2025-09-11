#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int t, w, h;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char board[1010][1010] = {};
int distF[1010][1010] = {};
int distS[1010][1010] = {};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    for (int _=0; _<t; _++) {
        cin >> w >> h;

        bool check = false;
        int ans = 1000010;

        queue<pair<int, int>> Q1;
        queue<pair<int, int>> Q2;

        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                cin >> board[i][j];

                if (board[i][j] == '*') {
                    Q1.push({i, j});
                    distF[i][j] = 0;
                    distS[i][j] = -1;
                } else if (board[i][j] == '@') {
                    Q2.push({i, j});
                    distF[i][j] = -1;
                    distS[i][j] = 0;
                } else {
                    distF[i][j] = -1;
                    distS[i][j] = -1;
                }
            }
        }

        while(!Q1.empty()) {
            pair<int, int> cur = Q1.front();
            Q1.pop();

            for (int dir=0; dir<4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if (distF[nx][ny] >= 0 || board[nx][ny] == '#') continue;

                distF[nx][ny] = distF[cur.X][cur.Y] + 1;
                Q1.push({nx, ny});
            }
        }

        while (!Q2.empty()) {
            pair<int, int> cur = Q2.front();
            Q2.pop();

            for (int dir=0; dir<4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    check = true;
                    ans = min(ans, distS[cur.X][cur.Y] + 1);
                }
                if (distS[nx][ny] >= 0 || board[nx][ny] != '.') continue;
                if (distF[nx][ny] != -1 && distS[cur.X][cur.Y] + 1 >= distF[nx][ny]) continue;

                distS[nx][ny] = distS[cur.X][cur.Y] + 1;
                Q2.push({nx, ny});
            }
        }

        if (check) {
            cout << ans << '\n';
        } else {
            cout << "IMPOSSIBLE\n";
        }
        
    }

    return 0;
}