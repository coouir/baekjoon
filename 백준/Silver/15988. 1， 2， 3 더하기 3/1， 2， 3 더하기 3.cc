#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t, n;
ll d[1000010];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for (int i=4; i<=1000000; i++) 
        d[i] = (d[i-1]%1000000009 + d[i-2]%1000000009 + d[i-3]%1000000009)%1000000009;

    cin >> t;
    while(t--) {
        cin >> n;
        cout << d[n] << '\n';
    }


    return 0;
}