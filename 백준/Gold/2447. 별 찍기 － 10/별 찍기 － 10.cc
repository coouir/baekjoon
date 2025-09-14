#include <bits/stdc++.h>
using namespace std;

int n;
char board[7000][7000];

void func(int n, int x, int y) {
    if (n == 3) {
        for (int i=x; i<x+n; i++) {
            for (int j=y; j<y+n; j++) {
                if (i == x+1 && j == y+1) continue;
                board[i][j] = '*';
            }
        }
        return;
    } 

    func(n/3, x, y);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if ((i == 0 && j == 0) || (i == 1 && j == 1)) continue;
            for (int a=0; a<n/3; a++) {
                for (int b=0; b<n/3; b++) {
                    board[x+i*n/3+a][y+j*n/3+b] = board[a+1][b+1];
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(n, 1, 1);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] == '*') cout << board[i][j];
            else cout << ' ';
        }
        cout << '\n';
    }


    return 0;
}