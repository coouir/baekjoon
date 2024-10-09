#include <stdio.h>
#include <math.h>

int main() {
    int M, N;

    scanf("%d %d", &M, &N);

    for ( ; M <= N; M++) {
        if (M == 1) {
            continue;
        }
        int check = 1;
        for (int i=2; i <= (int)sqrt(M); i++) {
            if (M%i == 0) {
                check = 0;
                break;
            }
        }
        if (check) {
            printf("%d\n", M);
        }
    }
    return 0;
}