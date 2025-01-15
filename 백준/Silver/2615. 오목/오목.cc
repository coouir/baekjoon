#include <iostream>
using namespace std;

int dx[8]={1, 1, 1, -1, -1, -1, 0, 0};
int dy[8]={-1, 0, 1, -1, 0, 1, -1, 1};

bool InRange(int r, int c) {
    return ((1 <= r && r <= 19) && (1 <= c && c <= 19));
}

int main() {
    int arr[20][20];
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=19; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=1; i<=19; i++) {
        for (int j=1; j<=19; j++) {
            if (arr[i][j] == 0) continue;
            for (int k=0; k<8; k++) {
                int x = i;
                int y = j;
                int cnt = 1;
                if (arr[i-dx[k]][j-dy[k]] == arr[i][j]) continue;
                while (true) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if (!InRange(nx, ny)) break;
                    if (arr[nx][ny] != arr[i][j]) break;
                    cnt++;
                    x = nx;
                    y = ny;
                }
                if (cnt == 5) {
                    printf("%d\n", arr[i][j]);
                    if (k == 0) {
                        printf("%d %d", i+4, j-4);
                    } else if (k == 1) {
                        printf("%d %d", i, j);
                    } else if (k == 2) {
                        printf("%d %d", i, j);
                    } else if (k == 3) {
                        printf("%d %d", i-4, j-4);
                    } else if (k == 4) {
                        printf("%d %d", i-4, j);
                    } else if (k == 5) {
                        printf("%d %d", i, j);
                    } else if (k == 6) {
                        printf("%d %d", i, j-4);
                    } else if (k == 7) {
                        printf("%d %d", i, j);
                    }
                    return 0;
                }
            }
        }
    }
    printf("0");
    return 0;
}

