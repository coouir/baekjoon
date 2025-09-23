#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;
int dist[120];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dist, dist+110, -1);

    map<int, int> ladder;
    map<int, int> snake;

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        ladder.insert({a, b});
    }
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        snake.insert({a, b});
    }

    queue<int> Q;

    dist[1] = 0;
    Q.push(1);
    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        if (cur == 100) break;

        for (int nxt : {cur+1, cur+2, cur+3, cur+4, cur+5, cur+6}) {
            if (nxt > 100) continue;
            if (dist[nxt] >=0) continue;

            dist[nxt] = dist[cur] + 1;
            if(ladder.find(nxt) != ladder.end()) {
                if (dist[ladder[nxt]] < 0) {
                    dist[ladder[nxt]] = dist[nxt];
                    Q.push(ladder[nxt]);
                }
            } else if (snake.find(nxt) != snake.end()) {
                if (dist[snake[nxt]] < 0) {
                    dist[snake[nxt]] = dist[nxt];
                    Q.push(snake[nxt]);
                }
            } else {
                Q.push(nxt);
            }
        }
    }
    cout << dist[100];

    return 0;
}