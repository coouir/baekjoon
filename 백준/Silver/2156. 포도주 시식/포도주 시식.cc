#include <bits/stdc++.h>
using namespace std;

int n;
int a[10010];
int d[10010][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    d[1][1] = a[1];
    d[2][0] = a[1];    
    d[2][1] = a[2];
    d[2][2] = a[1] + a[2];

    
    for (int i=3; i<=n; i++) {
        // for (int j=1; j<=i-2; j++) {
        //     d[i][1] = max(d[i][1], d[j][2] + a[i]);
        // }
        d[i][0] = max(d[i-2][0], max(d[i-2][1], d[i-2][2]));
        d[i][0] = max(d[i-1][0], max(d[i-1][1], d[i-1][2]));
        d[i][1] = max(d[i-2][0], max(d[i-2][1], d[i-2][2])) + a[i];
        d[i][2] = d[i-1][1] + a[i];
    }

    int M = 0;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<3; j++) {
            // cout << d[i][j] << ' ';
            M = max(M, d[i][j]);
        }
        // cout << '\n';
    }
    cout << M;
    
    return 0;
}