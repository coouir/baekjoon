#include <bits/stdc++.h>
using namespace std;

int n;
char board[3100][6200];

void func(int n, int x, int y) {
    if (n == 3) {
        board[x][y] = '*';
        board[x+1][y-1] = '*';
        board[x+1][y+1] = '*';
        board[x+2][y-2] = '*';
        board[x+2][y-1] = '*';
        board[x+2][y] = '*';
        board[x+2][y+1] = '*';
        board[x+2][y+2] = '*';
        return;
    }

    func(n/2, x, y);
    for (int i=0; i<n/2; i++) {
        for (int j=0; j<n-1; j++) {
            board[x + n/2 + i][y - n/2 - (n/2 - 1) + j] = board[x + i][y - (n/2 - 1) + j];
            board[x + n/2 + i][y + n/2 - (n/2 - 1) + j] = board[x + i][y - (n/2 - 1) + j];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    func(n, 1, n-1);

    for (int i=1; i<=n; i++) {
        for (int j=0; j<2*n; j++) {
            if (board[i][j] == '*') cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}