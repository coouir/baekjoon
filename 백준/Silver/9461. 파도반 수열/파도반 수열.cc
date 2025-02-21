#include <iostream>
using namespace std;

long long DP[110];

int main() {
    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 1;
    DP[4] = 2;
    DP[5] = 2;
    for (int i=6; i<=100; i++) {
        DP[i] = DP[i-1] + DP[i-5];
    }

    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        int N;
        cin >> N;
        
        cout << DP[N] << '\n';
    }

    return 0;
}

// DP  1   2   3   4   5   6   7   8   9   10
//     1   1   1   2   2   3   4   5   7   9

