#include <bits/stdc++.h>
using namespace std;

int n, cnt0, cnt1;
int board[130][130];

void func(int n, int x, int y) {
    if (n == 1) {
        if (board[x][y] == 0) cnt0++;
        else cnt1++;
        return;
    }
    bool check = true;

    int init = board[x][y];
    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (i == x && j == y) continue;
            if (init != board[i][j]) {
                check = false;
                break;
            }
        }
    }

    if (check) {
        if (init == 0) cnt0++;
        else cnt1++;
    } else {
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                func(n/2, x+i*n/2, y+j*n/2);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> board[i][j];
        }
    }
    func(n, 1, 1);
    cout << cnt0 << '\n' << cnt1;

    return 0;
}