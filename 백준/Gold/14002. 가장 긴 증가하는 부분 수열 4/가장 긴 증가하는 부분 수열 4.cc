#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010];
int d[1010];
int r[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) 
        cin >> a[i];

    for (int i=1; i<=n; i++) {
        d[i] = 1;
        for (int j=1; j<i; j++) {
            if (a[i] > a[j] && d[i] < d[j]+1) {
                d[i] = d[j] + 1;
                r[i] = j;
            }
        }
    }

    int idx = 0;
    for (int i=1; i<=n; i++) {
        if (d[idx] < d[i]) idx = i;
    }
    cout << d[idx] << '\n';

    stack<int> s;
    while (idx != 0) {
        s.push(a[idx]);
        // cout << a[idx] << ' ';
        idx = r[idx];
    }

    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    
    
    // cout << "\n";
    // for (int i=1; i<=n; i++) {
    //     cout << r[i] << ' ';
    // }
    


    return 0;
}