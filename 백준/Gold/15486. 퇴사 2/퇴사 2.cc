#include <bits/stdc++.h>
using namespace std;

int n;
int t[1500100], p[1500100];
int d[1500100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<vector<int>> v(n+100);

    for (int i=1; i<=n; i++) {
        cin >> t[i] >> p[i];
        v[i+t[i]].push_back(i);
    } 

    for (int i=1; i<=n+1; i++) {
        d[i] = d[i-1];
        for (int j=0; j<v[i].size(); j++) {
            d[i] = max(d[i], d[v[i][j]] + p[v[i][j]]);
        }
    }

    int M = 0;
    for (int i=1; i<=n+1; i++)
        M = max(M, d[i]);
    
    cout << M;

    return 0;
}