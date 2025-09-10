#include <bits/stdc++.h>
using namespace std;

int n, k;
int dist[100010];

int dx[3] = {-1, 1, 0};
int dy[3] = {1, 1, 2};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    
    if (n == k) {
        cout << 0;
        return 0;
    }
    
    queue<int> Q;
    
    dist[n] = 0;
    Q.push(n);

    fill(dist, dist+100010, -1);

    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int dir=0; dir<3; dir++) {
            int nx = (cur + dx[dir]) * dy[dir];

            if (nx < 0 || nx > 100000) continue;
            if (dist[nx] != -1) continue;

            dist[nx] = dist[cur] + 1;
            Q.push(nx);

            if (nx == k) {
                cout << dist[nx] + 1;
                return 0;
            }
        }
    }

    return 0;
}