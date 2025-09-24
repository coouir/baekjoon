#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int d[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    cin >> n;
    for (int i=1; i<=n; i++) 
        cin >> a[i];

    for (int i=1; i<=n; i++) 
        d[i] = max(d[i-1]+a[i], a[i]);
    

    int M = -2000;
    for (int i=1; i<=n; i++)
        M = max(M, d[i]);
    cout << M;

    return 0;
}