#include <bits/stdc++.h>
using namespace std;

int board[10][10];
int s_x, s_y, x, y, b_x, b_y;
string str;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    s_x = str[0]-'A'+1;
    s_y = str[1]-'1'+1;
    board[s_x][s_y] = 1;

    b_x = s_x;
    b_y = s_y;
    for (int dir=0; dir<35; dir++) {
        cin >> str;
        x = str[0]-'A'+1;
        y = str[1]-'1'+1;

        bool check = false;
        for (int dir=0; dir<8; dir++) {

            int nx = b_x + dx[dir];
            int ny = b_y + dy[dir];

            if (nx < 1 || nx > 6 || ny < 1 || ny > 6) continue;

            if (nx == x && ny == y) {
                check = true;
                break;
            }
        }
        if (!check || board[x][y]) {
            cout << "Invalid";
            return 0;
        }
        board[x][y] = 1;

        b_x = x;
        b_y = y;
    }

    bool check = false;
    for (int dir=0; dir<8; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx == s_x && ny == s_y) {
            cout << "Valid";
            return 0;
        }
    }
    cout << "Invalid";

    return 0;
}
