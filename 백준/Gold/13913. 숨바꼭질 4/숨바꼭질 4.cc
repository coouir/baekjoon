#include <bits/stdc++.h>
using namespace std;

int n, k;
int dist[100010];
int r[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dist, dist+100005, -1);
    cin >> n >> k;
    
    queue<int> Q;
    dist[n] = 0;
    Q.push(n);

    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        for (int nxt : {cur+1, cur-1, cur*2}) {
            if (!(0 <= nxt && nxt <= 100000)) continue;
            if (dist[nxt] >= 0) continue;

            dist[nxt] = dist[cur] + 1;
            r[nxt] = cur;
            Q.push(nxt);
        }
    }

    cout << dist[k] << '\n';

    stack<int> s;
    int idx = k;
    while (true) {
        s.push(idx);
        if (idx == n) break;
        idx = r[idx];
    } 

    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}