#include <bits/stdc++.h>
using namespace std;

int n, A, B, C, a, b, c, M;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;

    cin >> n;
    while (n--) {
        int tot = 0;
        for (int i=0; i<3; i++) {
            cin >> a >> b >> c;
            tot += a*A + b*B + c*C;
        }
        M = max(M, tot);
    }
    cout << M;

    return 0;
}