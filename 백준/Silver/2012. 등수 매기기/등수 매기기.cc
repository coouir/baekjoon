#include <bits/stdc++.h>
using namespace std;

int n;
int arr[500010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    long long ans = 0;
    for (int i=0; i<n; i++) {
        ans += abs(i+1 - arr[i]);
    }
    cout << ans;

    return 0;
}