#include <bits/stdc++.h>
using namespace std;

int n, m, k, r, c;
int note[45][45];
int sticker[15][15];

bool pastable(int x, int y) {
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (note[x+i][y+j] == 1 && sticker[i][j] == 1) return false;
        }
    }

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (sticker[i][j] == 1) note[x+i][y+j] = 1;
        }
    }
    return true;
}

void rotate() {
    int tmp[15][15];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            tmp[i][j] = sticker[i][j];
        }
    }

    for (int i=0; i<c; i++) {
        for (int j=0; j<r; j++) {
            sticker[i][j] = tmp[r-1-j][i];
        }
    }
    swap(r, c);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> k;
    while(k--) {
        cin >> r >> c;
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                cin >> sticker[i][j];
            }
        }

        for (int dir=0; dir<4; dir++) {
            bool check = false;
            for (int i=0; i<=n-r; i++) {
                if (check) break;
                for (int j=0; j<=m-c; j++) {
                    if(pastable(i, j)) {
                        check = true;
                        break;
                    }
                }
            }

            if (check) break;
            rotate();
        }
    }

    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (note[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}