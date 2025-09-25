#include <bits/stdc++.h>
using namespace std;

int n, k, a, b, ans;
int pot[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k >> a >> b;
    fill(pot, pot+n+10, 2000);
    fill(pot+1, pot+n+1, k);

    while (true) {
        ans++;
        int check = true;

        int idx = 0;
        for (int i=1; i<=n; i++) {
            if (pot[idx] > pot[i]) idx = i;
        }

        int cnt = a;
        int s = idx;
        int e = idx;
        while(cnt--) {
            if (s == e) {
                pot[s] += b;

                if (pot[s-1] <= pot[s+1]) {
                    s--;
                } else {
                    e++;
                }
            } else {
                if (pot[s] <= pot[e]) {
                    pot[s] += b;
                    
                    if (pot[s-1] <= pot[e+1]) {
                        s--;
                    } else {
                        e++;
                    }
                } else {
                    pot[e] += b;

                    if (pot[s-1] <= pot[e+1]) {
                        s--;
                    } else {
                        e++;
                    }
                }
            }
        }

        for (int i=1; i<=n; i++) {
            pot[i]--;

            if (pot[i] == 0) {
                check = false;
                break;
            }
        }

        // for (int i=1; i<=n; i++) cout << pot[i] << ' ';
        // cout << '\n';
        if(!check) break;


    }
    cout <<ans;

    return 0;
}