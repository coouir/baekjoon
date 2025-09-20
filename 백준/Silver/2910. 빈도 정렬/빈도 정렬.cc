#include <bits/stdc++.h>
using namespace std;

int n, c;
int a[1010];

bool cmp(pair<int, int> a, pair<int, int > b) {
    if (a.second != b.second) return a.second > b.second;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> v;
    for (int i=0; i<n; i++) {
        int check = true;
        for (int j=0; j<v.size(); j++) {
            if (v[j].first == a[i]) {
                check = false;
                break;
            }
        }
        if (!check) continue;

        int cnt = 1;
        for (int j=i+1; j<n; j++) 
            if (a[i] == a[j]) cnt++;

        v.push_back({a[i], cnt});
    }

    stable_sort(v.begin(), v.end(), cmp);
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].second; j++) {
            cout << v[i].first << ' ';
        }
    }

    return 0;
}