#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int k, w, h;
int board[210][210];
int dist[210][210][35];

int dx[12] = {1, 0, -1, 0, -2, -2, -1, -1, 1, 1, 2, 2};
int dy[12] = {0, 1, 0, -1, -1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;
    cin >> w >> h;
    for (int i=0; i<h; i++)
        for (int j=0; j<w; j++)
            cin >> board[i][j];

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            for (int _=0; _<=k; _++) {
                dist[i][j][_] = -1;
            }
        }
    }
    queue<tuple<int, int, int>> Q;
    
    Q.push({0, 0, 0});
    dist[0][0][0] = 0;

    while (!Q.empty()) {
        tuple<int, int, int> cur = Q.front();
        Q.pop();

        int x = get<0>(cur);
        int y = get<1>(cur);
        int cnt = get<2>(cur);

        for (int dir=0; dir<4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (dist[nx][ny][cnt] >= 0 || board[nx][ny] == 1) continue;

            Q.push({nx, ny, cnt});
            dist[nx][ny][cnt] = dist[x][y][cnt] + 1;
        }

        if (cnt >= k) continue; 
        for (int dir=4; dir<12; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (dist[nx][ny][cnt+1] >= 0 || board[nx][ny] == 1) continue;

            Q.push({nx, ny, cnt+1});
            dist[nx][ny][cnt+1] = dist[x][y][cnt] + 1;
        }
    }

    int m = 40000;
    for (int i=0; i<=k; i++) {
        if (dist[h-1][w-1][i] >= 0) 
            m = min(m, dist[h-1][w-1][i]);
    }

    if (m == 40000) {
        cout << -1;
    } else {
        cout << m;
    }

    return 0;
}