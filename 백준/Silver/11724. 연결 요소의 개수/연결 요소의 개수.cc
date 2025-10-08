#include <bits/stdc++.h>
using namespace std;

int n, m, u, v;
int ans[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<vector<int>> V(n+1);
    while (m--) {
        cin >> u >> v;
        V[u].push_back(v);
        V[v].push_back(u);
    }

    int cnt = 1;
    for (int i=1; i<=n; i++) {
        if (ans[i]) continue;
        ans[i] = cnt;

        queue<int> Q;
        Q.push(i);

        while(!Q.empty()) {
            int cur = Q.front();
            Q.pop();

            for (int j=0; j<V[cur].size(); j++) {
                if (ans[V[cur][j]]) continue;
                
                Q.push(V[cur][j]);
                ans[V[cur][j]] = cnt;
            }
        }
        cnt++;
    }
    cout << cnt-1;

    return 0;
}