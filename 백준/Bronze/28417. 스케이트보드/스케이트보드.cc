#include <bits/stdc++.h>
using namespace std;

int n, M;
int a, b, arr[5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while(n--) {
        cin >> a >> b;
        for (int i=0; i<5; i++) cin >> arr[i];
        sort(arr, arr+5);

        M = max(M, max(a, b) + arr[3] + arr[4]);
    }
    cout << M;

    return 0;
}