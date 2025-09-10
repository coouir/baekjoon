#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

bool check = false;
int r, c, timeJ = 1000000;
char board[1010][1010];
int vis[1010][1010];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;

    cin >> r >> c;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'F') Q.push({i, j}); 
        }
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (board[i][j] == 'J') Q.push({i, j}); 
        }
    }

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                if (board[cur.X][cur.Y] == 'J') {
                    check = true;
                    timeJ = min(timeJ, vis[cur.X][cur.Y] + 1);
                }
                continue;
            }

            if (vis[nx][ny] || board[nx][ny] != '.') continue;

            if (board[cur.X][cur.Y] == 'J' || board[cur.X][cur.Y] == 'F') {
                board[nx][ny] = board[cur.X][cur.Y];
                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            } 

            Q.push({nx, ny});
        }
    }

    if (check) {
        cout << timeJ;
    } else {
        cout << "IMPOSSIBLE";
    }
    return 0;
}