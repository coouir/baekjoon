#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
string str;

int board[1010][1010];
int dist[1010][1010][2];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> str;
        for (int j=0; j<m; j++) {
            board[i][j] = str[j]-'0';
        }
    }

    queue<tuple<int, int, int>> Q;

    // x, y, 0: 벽을 아직 부수지 않은 상태
    // x, y, 1: 벽을 부순 상태
    dist[0][0][0] = 1;
    Q.push({0, 0, 0});

    while(!Q.empty()) {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        if (get<0>(cur) == n-1 && get<1>(cur) == m-1) {
            cout << dist[get<0>(cur)][get<1>(cur)][get<2>(cur)];
            return 0;
        }

        for (int dir=0; dir<4; dir++) {
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int b = get<2>(cur);

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny][b] > 0) continue;
            if (board[nx][ny] == 0) {
                dist[nx][ny][b] = dist[get<0>(cur)][get<1>(cur)][b] + 1;
                Q.push({nx, ny, b});
            } else if (board[nx][ny] == 1 && b == 0) {
                dist[nx][ny][1] = dist[get<0>(cur)][get<1>(cur)][b] + 1;
                Q.push({nx, ny, 1});
            }
        }
    }
    cout << -1;
    return 0;
}