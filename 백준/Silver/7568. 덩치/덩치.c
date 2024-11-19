#include <stdio.h>

typedef struct {
    int weight;
    int height;
} P;

int main() {
    P p[50];
    
    int N, i, j;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d %d", &p[i].weight, &p[i].height);
    }

    for (i=0; i<N; i++) {
        int cnt = 1;
        for (j=0; j<N; j++) {
            if (i==j) {
                continue;
            }
            if (p[j].weight > p[i].weight && p[j].height > p[i].height)
                cnt++;
        }
        printf("%d ", cnt);
    }
    return 0;
}