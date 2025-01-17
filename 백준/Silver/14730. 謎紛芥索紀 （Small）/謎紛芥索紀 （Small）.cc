#include <iostream>
using namespace std;

int main() {
    int N, sum_val = 0;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int C, K;
        scanf("%d %d", &C, &K);
        if (K != 0) sum_val += C*K;
    }
    printf("%d", sum_val);
    return 0;
}