#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
bool vis1[100010];
bool vis2[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    map<string, int> m;
    vector<vector<string>> v(100010);
    
    int idx = 0;
    for (int i=1; i<n; i++) {
        cin >> a >> b;
        if (m.find(b) != m.end()) {
            v[m[b]].push_back(a);
        } else {
            m.insert({b, idx});
            v[m[b]].push_back(a);
            idx++;
        }

        if (m.find(a) == m.end()) {
            m.insert({a, idx});
            idx++;
        }
    }

    cin >> a >> b;
    queue<int> Q;
    Q.push(m[b]);
    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int i=0; i<v[cur].size(); i++) {
            if (vis1[m[v[cur][i]]]) continue;

            vis1[m[v[cur][i]]] = 1;
            Q.push(m[v[cur][i]]);
        }
    }

    Q.push(m[a]);
    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int i=0; i<v[cur].size(); i++) {
            if (vis2[m[v[cur][i]]]) continue;

            vis2[m[v[cur][i]]] = 1;
            Q.push(m[v[cur][i]]);
        }
    }
    
    if (vis1[m[a]] || vis2[m[b]]) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}