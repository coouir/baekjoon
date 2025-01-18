#include <iostream>
using namespace std;

int main() {
    int E, S, M;
    scanf("%d %d %d", &E, &S, &M);
    if (E == 15) E = 0;
    if (S == 28) S = 0;
    if (M == 19) M = 0;
    
    int year = 1;
    while (true) {
        if (year%15 == E && year%28 == S && year%19 == M) {
            printf("%d", year);
            break;
        }
        year++;
    }
    return 0;
}