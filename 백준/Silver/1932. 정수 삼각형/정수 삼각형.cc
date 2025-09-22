#include <bits/stdc++.h>
using namespace std;

int n;
int a[510][510];
int d[510][510];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cin >> a[i][j];
        }
    }

    d[1][1] = a[1][1];
    for (int i=2; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            d[i][j] = max(d[i-1][j-1], d[i-1][j]) + a[i][j];
        }
    }

    int M = 0;
    for (int j=1; j<=n; j++) {
        M = max(M, d[n][j]);
    }
    cout << M;

    return 0;
}