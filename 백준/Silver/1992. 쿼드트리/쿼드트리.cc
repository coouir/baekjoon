#include <bits/stdc++.h>
using namespace std;

string str;
int n;
int board[70][70];

void func(int n, int x, int y) {
    int init = board[x][y];

    if (n == 1) {
        cout << init;
        return;
    }

    bool check = true;
    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (i == x && y == j) continue;
            if (board[i][j] != init) {
                check = false;
                break;
            }
        }
    }

    if (check) {
        cout << init;
        return;
    } else {
        cout << '(';
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                func(n/2, x+i*n/2, y+j*n/2);
            }
        }
        cout << ')';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> str;
        for (int j=1; j<=n; j++) {
            board[i][j] = str[j-1] - '0';
        }
    }
    func(n, 1, 1);
    
    return 0;
}