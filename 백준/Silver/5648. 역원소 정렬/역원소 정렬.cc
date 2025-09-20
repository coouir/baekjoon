#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll a[1000010], x;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        ll r = 0;
        while (x > 0) {
            r = r*10 + x%10;
            x /= 10;
        }
        a[i] = r;
    }
    sort(a, a+n);

    for (int i=0; i<n; i++) 
        cout << a[i] << '\n';
        
    return 0;
}