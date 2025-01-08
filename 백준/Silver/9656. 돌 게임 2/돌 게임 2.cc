#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << ((N%2 == 0) ? "SK":"CY");
    return 0;
}

// N = 1, 1 창영
// N = 2, 1 2 상근
// N = 3, 1 2 3 창영
// N = 4, 1 2 3 4 상근
// N = 5, 1 2 3 4 5 창영
// N = 6, 1 2 3 4 5 6 상근