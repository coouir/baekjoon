#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, cntR, cntG, cntB, cntRG;
char board[110][110];
bool visR[110][110], visG[110][110], visB[110][110], visRG[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int BFS(char ch1, char ch2, bool vis[110][110]) {
    queue<pair<int, int>> Q;

    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if ((board[i][j] == ch1 || board[i][j] == ch2) && vis[i][j] == 0) {
                cnt++;
                Q.push({i, j});

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                        if (vis[nx][ny] || (board[nx][ny] != ch1 && board[nx][ny] != ch2)) continue;

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

    queue<pair<int, int>> Q;

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> board[i][j];
        }
    }

    cntR = BFS('R', 'R', visR);
    cntG = BFS('G', 'G', visG);
    cntB = BFS('B', 'B', visB);
    cntRG = BFS('R', 'G', visB);
    
    cout << cntR+cntG+cntB << ' ' << cntRG+cntB;

    return 0;
}