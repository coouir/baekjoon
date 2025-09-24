#include <bits/stdc++.h>
using namespace std;

int n;
int t[20], p[20];
int d[20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) 
        cin >> t[i] >> p[i];

    for (int i=1; i<=n+1; i++) {
        for (int j=1; j<i; j++) {
            if (j+t[j]-1 < i) d[i] = max(d[i], d[j] + p[j]);
        }
    }

    int M = 0;
    for (int i=1; i<=n+1; i++)
        M = max(M, d[i]);
    
    cout << M;
    
    return 0;
}