#include <bits/stdc++.h>
using namespace std;

int t, y, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        int scoreY = 0;
        int scoreK = 0;
        for (int i=0; i<9; i++) {
            cin >> y >> k;
            scoreY += y;
            scoreK += k;
        }

        if (scoreY > scoreK) {
            cout << "Yonsei" << '\n';
        } else if (scoreY == scoreK) {
            cout << "Draw" << '\n';
        } else {
            cout << "Korea" << '\n';
        }
    }

    return 0;
}