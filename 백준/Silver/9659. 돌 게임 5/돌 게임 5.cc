#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    cout << ((N%2 == 1)?"SK":"CY");
    return 0;
}

// N = 1, 1 상근
// N = 2, 1 2 창영
// N = 3, 1 2 3 상근
// N = 4, 1 2 3 4 창영
// N = 5, 1 2 3 4 5 상근
// N = 6, 1 2 3 4 5 6 창영
// N = 7, 1 2 3 4 5 6 7 상근