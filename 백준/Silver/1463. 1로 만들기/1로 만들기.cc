#include <bits/stdc++.h>
using namespace std;

int n;
int D[1000010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    D[1] = 0;
    for (int i=2; i<=n; i++) {
        if (i%6 == 0) {
            D[i] = min(D[i-1]+1, min(D[i/3]+1, D[i/2]+1));
        } else if (i%3 == 0) {
            D[i] = min(D[i-1]+1, D[i/3]+1);
        } else if (i%2 == 0) {
            D[i] = min(D[i-1]+1, D[i/2]+1);
        } else {
            D[i] = D[i-1]+1;
        }
    }
    cout << D[n];

    return 0;
}