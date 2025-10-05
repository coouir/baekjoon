#include <bits/stdc++.h>
using namespace std;

int n, k, b, x;
int arr[100010];
int prefix[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k >> b;
    for (int i=0; i<b; i++) {
        cin >> x;
        arr[x] = 1;
    }

    for (int i=1; i<=n; i++) {
        prefix[i] = arr[i] + prefix[i-1];
    }

    int m = 100010;
    for (int i=0; i<=n-k; i++) {
        m = min(m, prefix[i+k]-prefix[i]);
    }
    cout << m;

    return 0;
}