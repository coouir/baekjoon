#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x;
ll odd, even;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> x;
        if (i%2 == 1) odd += x;
        else even += x;
    }

    if (n == 3 && odd > even) {
        cout << -1;
    } else {
        cout << abs(odd-even);
    } 

    return 0;
}