#include <bits/stdc++.h>
using namespace std;

int n;
long long d[110][11];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i=0; i<=9; i++) {
        d[1][i] = 1;
    }

    for (int i=2; i<=n; i++) {
        d[i][0] = d[i-1][1]%1000000000;
        for (int j=1; j<=9; j++) {
            d[i][j] = (d[i-1][j-1] + d[i-1][j+1])%1000000000;
        }
    }

    long long cnt = 0;
    for (int j=1; j<=9; j++) {
        cnt = (cnt + d[n][j])%1000000000;
    }
    
    cout << cnt;

    return 0;
}