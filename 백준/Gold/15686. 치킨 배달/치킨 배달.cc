#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, ans = 40000;
int board[55][55];
vector<pair<int, int>> chicken;
vector<pair<int, int>> home;

int result[15];
int vis[15];

void func(int cur) {
    if (cur == m) {
        int s = 0;
        for (int i=0; i<home.size(); i++) {
            int M = 3000;
            int x_h = home[i].X;
            int y_h = home[i].Y;
            for (int j=0; j<m; j++) {
                int x_c = chicken[result[j]].X;
                int y_c = chicken[result[j]].Y;

                M = min(M, (abs(x_h - x_c) + abs(y_h - y_c)));
            }
            s += M;
        }

        ans = min(ans, s);
        
        return; 
    }

    for (int i=0; i<chicken.size(); i++) {
        if (vis[i]) continue;
        if (cur != 0 && result[cur-1] >= i) continue;

        vis[i] = 1;
        result[cur] = i;
        func(cur+1);
        vis[i] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> board[i][j];

            if (board[i][j] == 1) home.push_back({i, j});
            else if (board[i][j] == 2) chicken.push_back({i, j});
        }
    }

    func(0);

    cout << ans;
    return 0;
}