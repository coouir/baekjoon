#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, cnt;
string str;

int board[30][30];
bool vis[30][30];

int result[900];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<n; j++) {
            board[i][j] = str[j] - '0';
        }
    }

    queue<pair<int, int>> Q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (board[i][j] == 1 && vis[i][j] == 0) {
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

                        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                        if (vis[nx][ny] || board[nx][ny] == 0) continue;

                        area++;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }

                result[cnt] = area;
            }
        }
    }

    cout << cnt << '\n';

    sort(result+1, result+1+cnt);
    for (int i=1; i<=cnt; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}