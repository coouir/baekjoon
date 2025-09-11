#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board1[310][310];
int board2[310][310];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool melt(int board1[310][310], int board2[310][310]) {
    int check = false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board1[i][j] == 0) {
                board2[i][j] = 0;
            } 

            int cnt = 0;
            for (int dir=0; dir<4; dir++) {
                int nx = i + dx[dir];
                int ny = j + dy[dir];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (board1[nx][ny] == 0) cnt++;
            }
            if (board1[i][j]-cnt > 0) {
                board2[i][j] = board1[i][j] - cnt;
                check = true;
            } else {
                board2[i][j] = 0;
            }
        }
    }
    return check;
}

int bfs(int board[310][310]) {
    int cnt = 0;
    bool vis[310][310] = {};
    queue<pair<int, int>> Q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] != 0 && vis[i][j] == 0) {
                cnt++;
                vis[i][j] = 1;
                Q.push({i, j});

                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] == 1 || board[nx][ny] == 0) continue;

                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board1[i][j];
        }
    }

    int oe=0;
    while (true) {
        if (oe%2 == 0) {
            if(melt(board1, board2)) {
                int result = bfs(board2);
                if (result > 1) {
                    cout << oe+1;
                    return 0;
                }
            } else {
                cout << 0;
                return 0;
            }
            
        } else {
            if(melt(board2, board1)) {
                int result = bfs(board1);
                if (result > 1) {
                    cout << oe+1;
                    return 0;
                }
            } else {
                cout << 0;
                return 0;
            }
        }
        oe++;
    }

    return 0;
}