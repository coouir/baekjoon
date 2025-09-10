#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, k, xS, yS, xE, yE, cnt;
int result[10000];
int board[110][110];
bool vis[110][110];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int i=0; i<k; i++) {
        cin >> yS >> xS;
        cin >> yE >> xE;

        for (int i=xS; i<xE; i++) {
            for (int j=yS; j< yE; j++) {
                board[i][j] = 1;
            }
        }
    }

    queue<pair<int, int>> Q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 0 && vis[i][j] == 0) {
                int area = 1;

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
                        if (vis[nx][ny] || board[nx][ny] == 1) continue;

                        area++;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                result[cnt] = area;
            }
        }
    }

    sort(result+1, result+cnt+1);

    cout << cnt << '\n';
    for (int i=1; i<=cnt; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}