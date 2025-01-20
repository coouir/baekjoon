#include <iostream>
using namespace std;

int arr[1025][1025];
int prefix[1025][1025];

int main() {

    int N, M;
    scanf("%d %d", &N, &M);
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    for (int k=0; k<M; k++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", prefix[x2][y2] - prefix[x2][y1-1] - prefix[x1-1][y2] + prefix[x1-1][y1-1]);
    }

    return 0;
}