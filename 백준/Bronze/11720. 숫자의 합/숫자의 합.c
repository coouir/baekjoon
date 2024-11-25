#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    char arr[101], *ptr;
    ptr = arr;

    for (int i=0; i<N; i++) {
        *(ptr+i) = getchar();
    }

    int sum = 0;
    for (int i=0; i<N; i++) {
        sum += *(ptr+i) - 48;
    }
    printf("%d", sum);
    
    return 0;
}