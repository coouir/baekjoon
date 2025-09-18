#include <bits/stdc++.h>
using namespace std;

int n, tot, M = 50000;
int a[25];
int b[25];
int board[25][25];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> board[i][j];
            tot += board[i][j];
        }
    }
        
    for (int i=n/2; i<n; i++) a[i] = 1;
    for (int i=2; i<n/2; i++) b[i] = 1;

    do {
        int scoreA = 0;
        int scoreB = 0;

        int teamA[25] = {};
        int teamB[25] = {};
        int idxA = 0;
        int idxB = 0;
        for (int i=0; i<n; i++) 
            if (a[i] == 0) teamA[idxA++] = i+1;
            else teamB[idxB++] = i+1;

        // for (int i=0; i<n/2; i++) cout << team[i] << ' ';
        // cout << '\n';
        do {
            int pA[2] = {};
            int pB[2] = {};
            int idxA = 0;
            int idxB = 0;
            for (int i=0; i<n/2; i++) {
                if (b[i] == 0) {
                    pA[idxA++] = teamA[i];
                    pB[idxB++] = teamB[i];
                }
            }

            scoreA += board[pA[0]][pA[1]] + board[pA[1]][pA[0]];
            scoreB += board[pB[0]][pB[1]] + board[pB[1]][pB[0]];
            // cout << '\n';
        } while(next_permutation(b, b+n/2));      
        // cout << '\n';

        // cout << scoreA << ' ' << scoreB << '\n';
        M = min(M, abs(scoreA - scoreB));
    } while(next_permutation(a, a+n));
    cout << M;

    return 0;
}