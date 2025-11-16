#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int n, m; 
    cin >> n >> m;

    vector<vector<int>> v(n+10);
    for (int i = 0; i < m; i++) {
        int a, b; 
        cin >> a >> b;
        v[b].push_back(a);
    }
    
    vector<int> result(n + 1);
    int maxCnt = 0;
    
    for (int i = 1; i <= n; i++) {
        vector<bool> visited(n + 1, false);

        queue<int> Q;
        Q.push(i);
        visited[i] = true;
        int count = 0;
        
        while (!Q.empty()) {
            int node = Q.front();
            Q.pop();
            count++;
            for (const int& next : v[node]) {
                if (visited[next]) continue;
                visited[next] = true;
                Q.push(next);
            }
        }
        result[i] = count;
        maxCnt = max(maxCnt, count);
    }
    
    for (int i = 1; i <= n; i++) {
        if (result[i] == maxCnt)
            cout << i << ' ';
    }
    
    return 0;
}