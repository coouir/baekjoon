#include <bits/stdc++.h>
using namespace std;

int n, s, e;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> v;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s >> e;
        v.push_back({s, e});
    }
    sort(v.begin(), v.end(), cmp);

    int cnt = 1;

    s = v[0].first;
    e = v[0].second;
    for (int i=1; i<n; i++) {
        if (e <= v[i].first) {
            s = v[i].first;
            e = v[i].second;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}