#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
double x[10010];
double y[10010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) 
        cin >> x[i] >> y[i];

    x[n+1] = x[1];
    y[n+1] = y[1];

    ll cnt1 = 0;
    ll cnt2 = 0;
    for (int i=1; i<=n; i++) {
        cnt1 += x[i]*y[i+1];
        cnt2 += y[i]*x[i+1];
    }

    cout << fixed;
    cout.precision(1);
    cout << fabs(cnt1-cnt2)/2.0;
}