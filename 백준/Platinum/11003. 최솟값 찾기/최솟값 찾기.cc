#include <bits/stdc++.h>
using namespace std;

int n, l, x;
int ans[5000010];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<pair<int, int>> DQ;

    cin >> n >> l;
    for (int i=0; i<n; i++) {
        cin >> x;
        while(!DQ.empty() && DQ.back().first >= x) {
            DQ.pop_back();
        }
        DQ.push_back(make_pair(x, i));

        while(!DQ.empty() && DQ.front().second < i-l+1) {
            DQ.pop_front();
        }

        
        ans[i] = DQ.front().first;
    }

    for (int i=0; i<n; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}