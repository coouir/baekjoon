#include <bits/stdc++.h>
using namespace std;

int n, q, s, e;
int arr[1000010];
int prefix[1000010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        prefix[i] = arr[i] ^ prefix[i-1];
    }

    int ans = 0;
    while (q--) {
        cin >> s >> e;
        ans ^= prefix[e] ^ prefix[s-1];
    }
    cout << ans;
    
    return 0;
}