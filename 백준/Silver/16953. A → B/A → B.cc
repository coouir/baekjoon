#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    queue<pair<ll, ll>> Q;
    Q.push({a, 1});
    while (!Q.empty()) {
        pair<ll, ll> cur = Q.front();
        Q.pop();

        if (cur.first == b) {
            cout << cur.second;
            return 0;
        }

        for (ll nxt : {cur.first*2, cur.first*10+1}) {
            if (nxt <= b) {
                Q.push({nxt, cur.second+1});
            }
        }
    }
    cout << -1;

    return 0;
}