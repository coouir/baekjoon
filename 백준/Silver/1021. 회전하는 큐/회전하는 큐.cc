#include <bits/stdc++.h>
using namespace std;

int n, m, k, cnt, result;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;
    
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        DQ.push_back(i);
    }

    for (int i=0; i<m; i++) {
        cnt = 0;

        cin >> k;
        auto it = DQ.begin();
        while(*it != k) {
            it++;
            cnt++;
        }

        if (cnt <= n-cnt) {
            for (int j=0; j<cnt; j++) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            result += cnt;

        } else {
            for (int j=0; j<n-cnt; j++) {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            result += n-cnt;

        }
        DQ.pop_front();
        n--;

    }
    cout << result;

    return 0;
}