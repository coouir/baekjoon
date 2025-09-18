#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int ans;

char board[15][10];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void fall() {
    for (int i=10; i>=0; i--) {
        for (int j=0; j<6; j++) {
            if (board[i][j] == '.') continue;

            for (int x=11; x>i; x--) {
                if (board[x][j] == '.') {
                    board[x][j] = board[i][j];
                    board[i][j] = '.';
                    break;
                }
            } 
        }
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0; i<12; i++) 
        for (int j=0; j<6; j++)
            cin >> board[i][j];
    
    while (true) {
        bool check = false;
        for (int i=11; i>=0; i--) {
            for (int j=0; j<6; j++) {
                if (board[i][j] == '.') continue;
                int vis[15][10] = {};
                int cnt = 0;
                queue<pair<int, int>> Q1;

                char ch = board[i][j];

                cnt++;
                vis[i][j] = 1;
                Q1.push({i, j});
                while(!Q1.empty()) {
                    pair<int, int> cur = Q1.front();
                    Q1.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
                        if (vis[nx][ny] || board[nx][ny] != ch) continue;

                        cnt++;
                        vis[nx][ny] = 1;
                        Q1.push({nx, ny});
                    }
                }

                if (cnt >= 4) {
                    check = true;
                    queue<pair<int, int>> Q2;
                    
                    board[i][j] = '.';
                    Q2.push({i, j});
                    while(!Q2.empty()) {
                        pair<int, int> cur = Q2.front();
                        Q2.pop();

                        for (int dir=0; dir<4; dir++) {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];

                            if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
                            if (board[nx][ny] != ch) continue;
                            
                            board[nx][ny] = '.';
                            Q2.push({nx, ny});
                        }
                    }
                }
            }
        }

        if (check) {
            fall();
            ans++;
        } else {
            break;
        }
    }

    cout << ans;
    
    return 0;
}