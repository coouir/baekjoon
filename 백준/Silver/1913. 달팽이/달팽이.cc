#include <iostream>
using namespace std;

int N, n, arr[1000][1000];
int r, c, dr[4]={0, 1, 0, -1}, dc[4]={1, 0, -1, 0};
int dir_num = 2;

bool InRange(int r, int c) {
    return ((0 <= r && r < N) && (0 <= c && c < N));
}

int main() {
    int x=1, y=1;
    cin >> N >> n;
    arr[r][c] = N*N;
    for (int i=2; i<=N*N; i++) {
        int nr = r+dr[dir_num], nc = c+dc[dir_num];
        if (!(InRange(nr, nc)) || arr[nr][nc] != 0) dir_num = (dir_num+3)%4;

        r += dr[dir_num];
        c += dc[dir_num];
        arr[r][c] = N*N -i +1;
        if (N*N -i +1 == n) {
            x = r+1;
            y = c+1;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << x << ' ' << y;
    return 0;
}