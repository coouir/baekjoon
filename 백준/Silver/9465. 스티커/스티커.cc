#include <bits/stdc++.h>
using namespace std;

int t, n;
int s[3][100010];
int d[3][100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        for (int i=1; i<=2; i++) 
            for (int j=1; j<=n; j++) 
                cin >> s[i][j];

        d[1][1] = s[1][1];
        d[2][1] = s[2][1];
        d[1][2] = s[2][1] + s[1][2];
        d[2][2] = s[1][1] + s[2][2];

        for (int i=3; i<=n; i++) {
            d[1][i] = max(d[2][i-1], d[2][i-2]) + s[1][i];
            d[2][i] = max(d[1][i-1], d[1][i-2]) + s[2][i];
        }
        cout << max(d[1][n], d[2][n]) << '\n';
    }
    
    return 0;
}