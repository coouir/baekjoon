#include <bits/stdc++.h>
using namespace std;

int n;
int D[1010][3];
int r[1010], g[1010], b[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) 
        cin >> r[i] >> g[i] >> b[i];
    
    D[1][0] = r[1];
    D[1][1] = g[1];
    D[1][2] = b[1];
    for (int i=2; i<=n; i++) {
        D[i][0] = min(D[i-1][1], D[i-1][2]) + r[i];
        D[i][1] = min(D[i-1][0], D[i-1][2]) + g[i];
        D[i][2] = min(D[i-1][0], D[i-1][1]) + b[i];
    }

    cout << min(D[n][0], min(D[n][1], D[n][2]));

    return 0;
}