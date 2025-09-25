#include <bits/stdc++.h>
using namespace std;

int n, a, d, g, M;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while(n--) {
        cin >> a >> d >> g;
        int score = a*(d+g);
        if (a == d+g) score *= 2;

        M = max(M, score);
    }
    cout << M;

    return 0;
}