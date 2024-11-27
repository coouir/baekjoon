#include <stdio.h>

int main() {
    int N, M, K, i, j, m;
    int arrA[100][100], arrB[100][100];
    scanf("%d %d", &N, &M);
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            scanf("%d", &arrA[i][j]);
        }
    }
    scanf("%d %d", &M, &K);
    for (i=0; i<M; i++) {
        for (j=0; j<K; j++) {
            scanf("%d", &arrB[i][j]);
        }
    }

    //N*M M*K => N*K
    int matrix[100][100];
    for (i=0; i<N; i++) {
        for (j=0; j<K; j++) {
            long int sum = 0;
            for (m=0; m<M; m++) {
                sum += arrA[i][m]*arrB[m][j];
            }
            matrix[i][j] = sum;
        }
    }

    for (i=0; i<N; i++) {
        for (j=0; j<K; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}