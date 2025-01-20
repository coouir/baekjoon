#include <iostream>
using namespace std;

int arr[301][301];
int prefix[301][301];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }    

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            prefix[i][j] = arr[i][j] + prefix[i][j-1] + prefix[i-1][j] - prefix[i-1][j-1];
        }
    }

    int K;
    scanf("%d", &K);
    for (int k=0; k<K; k++) {
        int i, j, x, y;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        printf("%d\n", prefix[x][y] - prefix[x][j-1] - prefix[i-1][y] + prefix[i-1][j-1]);
    }

    return 0;
}