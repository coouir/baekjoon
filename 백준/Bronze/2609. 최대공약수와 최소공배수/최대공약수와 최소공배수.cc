#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int GCD = 1;
    for (int i=2; i<=min(A, B); i++) {
        if (A%i == 0 && B%i == 0) GCD = i;
    }
    printf("%d\n", GCD);
    printf("%d", (A*B)/GCD);
    return 0;
}