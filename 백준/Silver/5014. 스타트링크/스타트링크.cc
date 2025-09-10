#include <bits/stdc++.h>
using namespace std;

int f, s, g, u, d;
int vis[1000010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(vis+1, vis+1000005, -1);

    cin >> f >> s >> g >> u >> d;
    
    queue<int> Q;

    vis[s] = 0;
    Q.push(s);
    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int nxt : {cur+u, cur-d}) {
            if (nxt < 1 || nxt > f) continue;
            if (vis[nxt] >= 0) continue;

            vis[nxt] = vis[cur] + 1;
            Q.push(nxt);
        }
    }
    
    if (vis[g] != -1) {
        cout << vis[g];
    } else {
        cout << "use the stairs";
    }
    
    return 0;
}