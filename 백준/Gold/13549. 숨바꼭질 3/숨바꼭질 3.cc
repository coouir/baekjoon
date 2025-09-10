#include <bits/stdc++.h>
using namespace std;

int n, k;
int dist[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dist, dist+100001, -1);
    cin >> n >> k;

    queue<int> Q;
    dist[n] = 0;
    Q.push(n);

    while(dist[k] == -1) {
        int cur = Q.front();
        Q.pop();

        int nxt = cur*2;
        if ((0 <= nxt && nxt <= 100000) && dist[nxt] == -1) {
            dist[nxt] = dist[cur];
            Q.push(nxt);
        }
        
        for (int nxt : {cur-1, cur+1}) {
            if (nxt < 0 || nxt > 100000) continue;
            if (dist[nxt] >= 0) continue;
            
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[k];

    return 0;
}