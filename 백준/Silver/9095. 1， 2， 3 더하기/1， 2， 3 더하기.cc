#include <bits/stdc++.h>
using namespace std;

int t, n;
int D[20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    for (int i=4; i<11; i++) {
        D[i] = D[i-1] + D[i-2] + D[i-3];
    }

    cin >> t;
    while(t--) {
        cin >> n;
        cout << D[n] << '\n';
    }

    return 0;
}