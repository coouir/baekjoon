#include <bits/stdc++.h>
using namespace std;

int n, M;
int board[1010][1010];

int dp1[1010][1010] = {};
int dp2[1010][1010] = {};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> board[i][j];

    // case 1
    for (int i=0; i<=n+1; i++) {
        for (int j=0; j<=n+1; j++) {
            dp1[i][j] = 0;
            dp2[i][j] = 0;
        }
    } 

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] != 1) continue;

            if (board[i][j-1] == 1) dp1[i][j] = dp1[i][j-1] + 1;
            else dp1[i][j] = 1;
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=n; j>=1; j--) {
            if (board[i][j] != 1) continue;

            if (board[i][j+1] == 1) dp2[i][j] = dp2[i][j+1] + 1;
            else dp2[i][j] = 1;
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] == 1) {
                M = max(M, max(dp1[i][j], dp2[i][j]));
            } else if (board[i][j] == 2) {
                M = max(M, dp1[i][j-1]+1+dp2[i][j+1]);
            }
        }
    }

    // case 2
    for (int i=0; i<=n+1; i++) {
        for (int j=0; j<=n+1; j++) {
            dp1[i][j] = 0;
            dp2[i][j] = 0;
        }
    } 

    for (int j=1; j<=n; j++) {
        for (int i=1; i<=n; i++) {
            if (board[i][j] != 1) continue;

            if (board[i-1][j] == 1) dp1[i][j] = dp1[i-1][j] + 1;
            else dp1[i][j] = 1;
        }
    }
    for (int j=1; j<=n; j++) {
        for (int i=n; i>=1; i--) {
            if (board[i][j] != 1) continue;

            if (board[i+1][j] == 1) dp2[i][j] = dp2[i+1][j] + 1;
            else dp2[i][j] = 1;
        }
    }

    for (int j=1; j<=n; j++) {
        for (int i=1; i<=n; i++) {
            if (board[i][j] == 1) {
                M = max(M, max(dp1[i][j], dp2[i][j]));
            } else if (board[i][j] == 2) {
                M = max(M, dp1[i-1][j]+1+dp2[i+1][j]);
            }
        }
    }

    // case 3
    for (int i=0; i<=n+1; i++) {
        for (int j=0; j<=n+1; j++) {
            dp1[i][j] = 0;
            dp2[i][j] = 0;
        }
    } 

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] != 1) continue;

            if (board[i-1][j-1] == 1) dp1[i][j] = dp1[i-1][j-1] + 1;
            else dp1[i][j] = 1;
        }
    }
    for (int i=n; i>=1; i--) {
        for (int j=n; j>=1; j--) {
            if (board[i][j] != 1) continue;

            if (board[i+1][j+1] == 1) dp2[i][j] = dp2[i+1][j+1] + 1;
            else dp2[i][j] = 1;
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] == 1) {
                M = max(M, max(dp1[i][j], dp2[i][j]));
            } else if (board[i][j] == 2) {
                M = max(M, dp1[i-1][j-1]+1+dp2[i+1][j+1]);
            }
        }
    }

    // case 4
    for (int i=0; i<=n+1; i++) {
        for (int j=0; j<=n+1; j++) {
            dp1[i][j] = 0;
            dp2[i][j] = 0;
        }
    } 
    
    for (int i=n; i>=1; i--) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] != 1) continue;

            if (board[i+1][j-1] == 1) dp1[i][j] = dp1[i+1][j-1] + 1;
            else dp1[i][j] = 1;
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=n; j>=1; j--) {
            if (board[i][j] != 1) continue;

            if (board[i-1][j+1] == 1) dp2[i][j] = dp2[i-1][j+1] + 1;
            else dp2[i][j] = 1;
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (board[i][j] == 1) {
                M = max(M, max(dp1[i][j], dp2[i][j]));
            } else if (board[i][j] == 2) {
                M = max(M, dp1[i+1][j-1]+1+dp2[i-1][j+1]);
            }
        }
    }

    cout << M;

    return 0;
}