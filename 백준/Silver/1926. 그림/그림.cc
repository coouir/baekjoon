#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, cnt = 1, M;
int board[510][510];
int vis[510][510];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 1 && vis[i][j] == 0) {
                queue<pair<int, int>> Q;
                
                int area = 1;
                vis[i][j] = cnt;
                Q.push({i, j});

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int dir=0; dir<4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] || board[nx][ny] != 1) continue;

                        vis[nx][ny] = cnt;
                        Q.push({nx, ny});
                        area++;
                    }
                }

                cnt++;
                M = max(M, area);
            }
        }
    }
    
    cout << cnt-1 << '\n';
    cout << M;
    
    return 0;
}