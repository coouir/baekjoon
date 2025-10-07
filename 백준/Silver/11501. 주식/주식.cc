#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        int arr[1000010] = {};
        int prefix[1000010] = {};

        cin >> n;
        for (int i=1; i<=n; i++) 
            cin >> arr[i];
        
        for (int i=n; i>=1; i--) {
            prefix[i] = max(prefix[i+1], arr[i]);
        }

        long long ans = 0;
        for (int i=1; i<=n; i++) {
            if (prefix[i+1] - arr[i] > 0) {
                ans += prefix[i+1] - arr[i];
            }
        }
        cout << ans << '\n';

    }

    return 0;
}