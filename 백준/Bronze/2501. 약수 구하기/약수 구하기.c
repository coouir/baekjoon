#include <stdio.h>

int main() {
    int N, K;
    int cnt = 0;
    int check = 1;
    scanf("%d %d", &N, &K);

    for (int i=1; i<=N; i++) {
        if (N%i == 0) {
            cnt += 1;
            if (cnt == K) {
                printf("%d", i);
                check = 0;
                break;
            }
        }
    }
    
    if (check)
        printf("%d", 0);
    return 0;
}