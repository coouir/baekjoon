#include <bits/stdc++.h>
using namespace std;

int n, M;
int arr[25][25];
int board[25][25];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool OOB(int x, int y) {
    return (x < 0 || x >= n || y < 0 || y >= n);
}

void moveBlock(int dir, bool add[25][25], int x, int y) {
    if (board[x][y] == 0) return;
    while (1) {
        if (add[x][y]) break;
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (OOB(nx, ny)) break;
        if (board[nx][ny] != 0 && board[nx][ny] != board[x][y]) break;
        if (add[nx][ny]) break;
        if (board[nx][ny] == board[x][y]) add[nx][ny] = 1;
        board[nx][ny] += board[x][y];
        board[x][y] = 0;     
        x = nx;
        y = ny;       
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int tmp=0; tmp<(1<<(2*5)); tmp++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                board[i][j] = arr[i][j];
            }
        }

        int brute = tmp;
        for (int i=0; i<5; i++) {
            bool add[25][25] = {};
            int dir = brute%4;
            // cout << dir;
            if (dir == 0) {
                for (int x=n-1; x>=0; x--) {
                    for (int y=0; y<n; y++) {
                        moveBlock(0, add, x, y);
                    }
                }
            } else if (dir == 1) {
                for (int x=0; x<n; x++) {
                    for (int y=n-1; y>=0; y--) {
                        moveBlock(1, add, x, y);
                    }
                }
            } else {
                for (int x=0; x<n; x++) {
                    for (int y=0; y<n; y++) {
                        moveBlock(dir, add, x, y);
                    }
                }
            }
            brute /=4;
        }

        // cout << "\n\n";
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                // cout << board[i][j] << ' ';
                M = max(M, board[i][j]);
            }
            // cout << '\n';
        }
        // for (int i=0; i<n; i++) {
        //     for (int j=0; j<n; j++) {
        //         cout << add[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
    }

    cout << M;

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {    
    //         moveBlock(2, i, j);        
    //     }
    // }
    // for (int i=0; i<n; i++) {
    //     for (int j=n-1; j>=0; j--) {    
    //         moveBlock(1, i, j);        
    //     }
    // }

    // cout << '\n';
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << board[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout << add[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }



    // for (int tmp=0; tmp<(1<<(2*5)); tmp++) {
    //     int brute = tmp;
    //     for (int i=0; i<5; i++) {
    //         cout << brute%4;
    //         brute /= 4;
    //     }
    //     cout << '\n';
    // }
    
    return 0;
}