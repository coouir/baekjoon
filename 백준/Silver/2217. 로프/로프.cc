#include <bits/stdc++.h>
using namespace std;

int n, M;
int w[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> w[i];
    
    sort(w, w+n);

    for (int i=n-1; i>=0; i--) 
        M = max(M, w[i]*(n-i));
    
    cout << M;

    return 0;
}