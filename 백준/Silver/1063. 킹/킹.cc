#include <iostream>
using namespace std;

int DIR(string dir) {
    char arr[8][3] = {"LT", "T", "RT", "L", "R", "LB", "B", "RB"};
    for (int i=0; i<8; i++) {
        if (arr[i] == dir) return i;
    }
}

bool InRange(int x, int y) {
    return ((int('A') <= x && x <= int('H')) && (int('1') <= y && y <= int('8')));
}

int main() {
    int dx[8]={-1, 0, 1, -1, 1, -1, 0, 1};
    int dy[8]={1, 1, 1, 0, 0, -1, -1, -1};
    char KX, KY, RX, RY; int N;
    scanf("%c%c %c%c %d", &KX, &KY, &RX, &RY, &N);
    for (int i=0; i<N; i++) {
        char dir_c[3];
        scanf("%s", dir_c);
        int dir_n = DIR(dir_c);
        
        int nx = KX + dx[dir_n];
        int ny = KY + dy[dir_n];
        if (!InRange(nx, ny)) continue;
        if (nx == RX && ny == RY) {
            int nRx = RX + dx[dir_n];
            int nRy = RY + dy[dir_n];
            if (!InRange(nRx, nRy)) continue;
            RX = nRx; RY = nRy;
        }
        KX = nx; KY = ny;
    }
    printf("%c%c\n", char(KX), char(KY));
    printf("%c%c", char(RX), char(RY));
    return 0;
}