#include <iostream>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        int N, M;
        long long result = 1;
        scanf("%d %d", &N, &M);
        for (int j=0; j<N; j++) {
            result *= (M-j);
            result /= j+1;
        }
        printf("%lld\n", result);
    }
    return 0;
}