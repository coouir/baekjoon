#include <bits/stdc++.h>
using namespace std;

int n, a, b;
bool vis[100010];
int result[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> v(100010);

    cin >> n;
    for (int i=0; i<n-1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);   
    }

    queue<int> Q;

    vis[1] = 1;
    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int i=0; i<v[cur].size(); i++) {
            if (vis[v[cur][i]]) continue;
            vis[v[cur][i]] = 1;
            result[v[cur][i]] = cur;
            Q.push(v[cur][i]);
        }
    }
    for (int i=2; i<=n; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}