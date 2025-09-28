#include <bits/stdc++.h>
using namespace std;

int t, n;
int arr[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        int cnt = 0;
        unordered_set<int> s;

        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                int a = arr[i];
                int c = arr[j];

                if ((a+c)%2 == 0 && s.find((a+c)/2) != s.end()) cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}