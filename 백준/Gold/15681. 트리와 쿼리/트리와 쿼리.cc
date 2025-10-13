#include <bits/stdc++.h>
using namespace std;

int n, r, q, U, V;
int dist[100010];
int ans[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> r >> q;

    vector<vector<int>> v(n+1);
    for (int i=0; i<n-1; i++) {
        cin >> U >> V;

        v[U].push_back(V);
        v[V].push_back(U);
    }

    fill(dist, dist+n+5, -1);

    queue<int> Q;
    vector<pair<int, int>> distV;

    Q.push(r);
    distV.push_back({r, 0});
    dist[r] = 0;

    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int i=0; i<v[cur].size(); i++) {
            if (dist[v[cur][i]] >= 0) continue;

            Q.push(v[cur][i]);
            distV.push_back({v[cur][i], dist[cur] + 1});
            dist[v[cur][i]] = dist[cur] + 1;


        }
    }
    
    // cout << distV.size();
    // cout << '\n';

    // for (int i=0; i<distV.size(); i++) cout << distV[i].first << ' ' << distV[i].second << '\n';

    // cout << "\n\n";
    for (int i=distV.size()-1; i>=0; i--) {
        queue<int> Q2;
        
        ans[distV[i].first] = 1;

        // cout << distV[i].first << "  ";
        for (int j=0; j<v[distV[i].first].size(); j++) {
            int node = v[distV[i].first][j];
            if (distV[i].second < dist[node]) {
                ans[distV[i].first] += ans[v[distV[i].first][j]];
                // cout << v[distV[i].first][j] << ' ';
            }
        }
        // cout << '\n';
    }

    // for (int i=1; i<=n; i++) cout << ans[i] < ' ';

    while (q--) {
        cin >> U;
        cout << ans[U] << '\n'; 
    }

    return 0;
}