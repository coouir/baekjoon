#include <bits/stdc++.h>
using namespace std;

int n, m, i, j;
int arr[100010];
int prefix[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=1; i<=n; i++)
        cin >> arr[i];

    for (int i=1; i<=n; i++)
        prefix[i] = prefix[i-1] + arr[i];

    while(m--) {
        cin >> i >> j;
        cout << prefix[j] - prefix[i-1] << '\n';
    }
    
    return 0;
}