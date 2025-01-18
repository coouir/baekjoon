#include <iostream>
using namespace std;

int main() {
    int N, K;
    long long result = 1;
    scanf("%d %d", &N, &K);
    for (int j=0; j<K; j++) {
        result *= (N-j);
        result /= j+1;
    }
    printf("%lld\n", result);
    return 0;
}