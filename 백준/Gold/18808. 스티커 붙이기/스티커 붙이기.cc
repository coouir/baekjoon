#include <bits/stdc++.h>
using namespace std;

int n, m, k, r, c;
int board[50][50];
int sticker[15][15];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    for (int _=0; _<k; _++) {
        cin >> r >> c;
        for (int i=0; i<r; i++) 
            for (int j=0; j<c; j++) 
                cin >> sticker[i][j];

        for (int dir=0; dir<4; dir++) {
            // cout << '\n';
            // cout << dir << '\n';
            // cout << r << ' ' << c << '\n';
            for (int i=0; i<n-r+1; i++) {
                for (int j=0; j<m-c+1; j++) {
                    // cout <<"B"<< i << ' ' << j << '\n';
                    if (i+r > n || j+c > m) continue;
                    // cout << i << ' ' << j << '\n';
                    bool tf = true;
                    for (int x=i; x<i+r; x++) {
                        for (int y=j; y<j+c; y++) {
                            if (board[x][y] == 1 && sticker[x-i][y-j] == 1) {
                                tf = false;
                            }
                        }
                    }

                    if (tf) {
                        // cout << "A "<< i << ' ' << j << '\n';
                        for (int x=i; x<i+r; x++) {
                            for (int y=j; y<j+c; y++) {
                                // cout << i << ' ' << j << '\n';
                                if (sticker[x-i][y-j] == 1) board[x][y] = 1;
                            }
                        }
                        goto SUC;
                    }
                }
            }
            // cout << r << ' ' << c;
            int tmp[15][15] = {};
            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {
                    tmp[j][r-i-1] = sticker[i][j];
                }
            }
            swap(r, c);
            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {
                    sticker[i][j] = tmp[i][j];
                }
            }
        }

        SUC:
            continue;
        // for (int i=0; i<n; i++) {
        //     for (int j=0; j<m; j++) {
        //         cout << board[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }

        
    }

    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 1) cnt++;
        }
    }
    cout << cnt;

    return 0;
}