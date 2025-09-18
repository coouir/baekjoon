#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n, m, M;
int board1[10][10];
int board2[10][10];
int a[100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int BFS() {
    bool vis[10][10] = {};
    queue<pair<int, int>> Q;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board2[i][j] == 2) {
                vis[i][j] = 1;
                Q.push({i, j});
            }
        }
    }

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] || board2[nx][ny] == 1) continue;

            board2[nx][ny] = 2;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }

    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            // cout << board2[i][j] << ' ';
            if (board2[i][j] == 0) cnt++;
        }
        // cout << '\n';
    }

    // if (cnt > 5) {
    //     for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         cout << board2[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    // cout << "\n\n";
    // }

    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++)
            cin >> board1[i][j];

    for (int i=3; i<n*m; i++) 
        a[i] = 1;

    do {
        int check = true;
        vector<pair<int, int>> wall;
        for (int i=0; i<n*m; i++) {
            if (a[i] == 0) {
                if (board1[i/m][i%m] != 0) check = false;
                wall.push_back({i/m, i%m});
            }
        }

        if (!check) continue;

        for (int i=0; i<n; i++) 
            for (int j=0; j<m; j++)
                board2[i][j] = board1[i][j];

        for (int i=0; i<3; i++) 
            board2[wall[i].X][wall[i].Y] = 1;
        
        M = max(M, BFS());
    } while(next_permutation(a, a+n*m));

    cout << M;

    return 0;
}