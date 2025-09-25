#include <bits/stdc++.h>
using namespace std;

int n, s, e, eM;
string name, place;

int t[15][50010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    set<string> S;
    map<string, int> m1;
    map<int, string> m2;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> name >> place >> s >> e;

        if (S.find(name) != S.end()) continue;
        S.insert(name);

        eM = max(eM, e);

        if (m1.find(place) == m1.end()) {
            m1.insert({place, cnt});
            m2.insert({cnt, place});

            for (int j=s; j<e; j++)
                t[cnt][j]++;

            cnt++;
        } else {
            for (int j=s; j<e; j++)
                t[m1[place]][j]++;
        }
    }

    int M = 0;
    for (int i=0; i<cnt; i++)
        for (int j=1; j<eM; j++)
            M = max(M, t[i][j]);

    vector<pair<string, int>> ans;
    for (int i=0; i<cnt; i++) {
        int idxJ = 0;
        for (int j=1; j<eM; j++) {
            if (t[i][j] == M) {
                idxJ = j;
                break;
            }
        }

        if (idxJ == 0) continue;
        ans.push_back({m2[i], idxJ});
    }
    sort(ans.begin(), ans.end());
    
    int l = 0;
    for (int i=ans[0].second; i<eM; i++) {
        if (t[m1[ans[0].first]][i] == t[m1[ans[0].first]][ans[0].second]) l = i;
        else break;
    }
    cout << ans[0].first << ' ' << ans[0].second << ' ' << l+1;

    return 0;
}