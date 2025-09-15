#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[5][5];
int cnt, cntS, cntY;
int pick[7];
int isused[25];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void func(int cur) {
    if (cur == 7) {
        if (cntS >= 4) {
            int  cntBFS = 0;
            bool vis[5][5] = {};

            queue<pair<int, int>> Q;
            for (int i=0; i<7; i++) {
                int x = pick[i]/5;
                int y = pick[i]%5;
                
                if (vis[x][y]) continue;
                cntBFS++;
                vis[x][y] = 1;
                Q.push({x, y});

                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
                        if (!isused[nx*5 + ny]) continue;
                        if (vis[nx][ny]) continue;

                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
            
            if (cntBFS == 1) cnt++;
        }
        return; 
    }
    for (int i=0; i<25; i++) {
        if (isused[i]) continue;
        if (cur != 0 && pick[cur-1] >= i) continue;
        pick[cur] = i;
        isused[i] = 1;
        if (board[i/5][i%5] == 'S') {
            cntS++;
            func(cur+1);
            cntS--; 
        } else {
            cntY++;
            func(cur+1);
            cntY--; 
        }
        isused[i] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> board[i][j];
        }
    }

    func(0);

    cout << cnt;
    return 0;
}