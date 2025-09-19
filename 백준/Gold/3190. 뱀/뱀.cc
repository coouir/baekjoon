#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, k, l, r, c, x, dir=1, cnt, idx;
char d;
int board[110][110];
vector<pair<int, char>> L;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool OOB(int x, int y) {
    return (x <= 0 || x> n || y <= 0 || y > n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> k;
    for (int i=0; i<k; i++) {
        cin >> r >> c;
        board[r][c] = 2;
    }

    cin >> l;
    for (int i=0; i<l; i++) {
        cin >> x >> d;
        L.push_back({x, d});
    }

    deque<pair<int, int>> DQ;
    
    board[1][1] = 1;
    DQ.push_back({1, 1});

    while (true) {
        cnt++;

        pair<int, int> cur = DQ.front();
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if(OOB(nx, ny) || board[nx][ny] == 1) break;

        if(board[nx][ny] != 2) {
            pair<int, int> t = DQ.back();
            board[t.X][t.Y] = 0;
            DQ.pop_back();
        }
        board[nx][ny] = 1;
        DQ.push_front({nx, ny});

        if (L[idx].X == cnt) {
            if (L[idx].Y == 'L') {
                dir = (dir+1)%4;
            } else {
                dir = (dir+3)%4;
            }
            idx++;
        }
    }
    cout << cnt;

    return 0;
}