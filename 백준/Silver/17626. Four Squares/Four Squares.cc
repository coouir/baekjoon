#include <iostream>
#include <algorithm>
using namespace std;

int DP[500010];

int main() {
    for (int i=1; i<=500000; i++) {
        DP[i] = 4;

        for (int j=1; j*j <=i; j++) {
            DP[i] = min(DP[i], DP[i- j*j] + 1);
        }
    }

    int n;
    cin >> n;

    cout << DP[n];

    return 0;
}