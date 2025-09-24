#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010];
int d[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    
    for (int i=1; i<=n; i++) {
        d[i] = a[i];
        for (int j=1; j<i; j++) 
            d[i] = max(d[i], d[j] + d[i-j]);
        
    }    

    cout << d[n];

    return 0;
}