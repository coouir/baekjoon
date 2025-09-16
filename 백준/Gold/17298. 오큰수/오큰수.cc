#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000010];
int ans[1000010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    stack<int> S;
    for (int i=n-1; i>=0; i--) {
        while (true) {
            if (S.empty()) {
                ans[i] = -1;
                break;
            }

            int t = S.top();
            if (arr[i] < t) {
                ans[i] = t;
                break;
            } else {
                S.pop();
            }
        }
        S.push(arr[i]);
    }

    for (int i=0; i<n; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}