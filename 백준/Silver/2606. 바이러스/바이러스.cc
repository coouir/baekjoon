#include <bits/stdc++.h>
using namespace std;

int cnt, n, a, b, ans;
int arr[110][110];
bool vis[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> cnt >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    queue<int> Q;

    vis[1] = 1;
    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int j=1; j<=cnt; j++) {
            if (vis[j]) continue;
            if (arr[cur][j] != 1) continue;
            
            ans++;
            vis[j] = 1;
            Q.push(j);
        }
    }

    cout << ans;

    return 0;
}