#include <bits/stdc++.h>
using namespace std;

string str;
int n, m, k;
int board[1010][1010];
int dist[1010][1010][11];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++) {
            board[i][j] = str[j]-'0';
        }
    }

    queue<tuple<int, int, int>> Q;
    dist[0][0][0] = 1;
    Q.push({0, 0, 0});

    while(!Q.empty()) {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        int x = get<0>(cur);
        int y = get<1>(cur);
        int b = get<2>(cur);
        
        if (x == n-1 && y == m-1) {
            cout << dist[x][y][b];
            return 0;
        }

        for (int dir=0; dir<4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny][b] > 0) continue;
            
            if (board[nx][ny] == 0) {
                dist[nx][ny][b] = dist[x][y][b] + 1;
                Q.push({nx, ny, b});
            } else if (board[nx][ny] == 1 && b < k) {
                if (dist[nx][ny][b+1] > 0) continue;
                dist[nx][ny][b+1] = dist[x][y][b] + 1;
                Q.push({nx, ny, b+1});
            }
        }
    }
    cout << -1;

    return 0;
}