#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1000010];
int b[1000010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++)
        cin >> a[i];

    for (int i=0; i<m; i++)
        cin >> b[i];

    vector<int> v;

    int idxA = 0;
    int idxB = 0;
    while (!(idxA == n && idxB == m)) {
        if (idxA == n) {
            while (idxB != m) {
                v.push_back(b[idxB]);
                idxB++;
            }
            break;
        }
        if (idxB == m) {
            while (idxA != n) {
                v.push_back(a[idxA]);
                idxA++;
            }
            break;
        }

        if (a[idxA] <= b[idxB]) {
            v.push_back(a[idxA]);
            idxA++;
        } else {
            v.push_back(b[idxB]);
            idxB++;
        }
    }
    
    for (int i=0; i<n+m; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}