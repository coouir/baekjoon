#include <bits/stdc++.h>
using namespace std;

int n, m, r, c, d, ans;
int board[55][55];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cin >> r >> c >> d;

    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++)
            cin >> board[i][j];
    
    while (true) {
        if (board[r][c] == 0) {
            board[r][c] = 2;
            ans++;
        }

        bool check = true;
        for (int dir=0; dir<4; dir++) {
            int nr = r + dx[dir];
            int nc = c + dy[dir];

            if (board[nr][nc] == 0) check = false;
        }

        if (check) {
            int nr = r + dx[(d+2)%4];
            int nc = c + dy[(d+2)%4];
            if (board[nr][nc] == 1) break;
            r = nr;
            c = nc;

        } else {
            d = (d+3)%4;
            int nr = r + dx[d];
            int nc = c + dy[d];
            if (board[nr][nc] == 0) {
                r = nr;
                c = nc;
            }          
        }
    }
    
    cout << ans; 

    return 0;
}