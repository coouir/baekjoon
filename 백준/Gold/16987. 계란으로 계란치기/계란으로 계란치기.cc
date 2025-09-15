#include <bits/stdc++.h>
using namespace std;

int n, M;
int eggs[10][2];
int result[10];

void func(int cur) {
    if (cur == n) {
        int eggs2[10][2];
        for (int i=0; i<n; i++) {
            eggs2[i][0] = eggs[i][0];
            eggs2[i][1] = eggs[i][1];
        }

        for (int i=0; i<n; i++) {
            if (eggs2[i][0] <= 0 || eggs2[result[i]][0] <= 0) continue;
            eggs2[i][0] -= eggs2[result[i]][1];
            eggs2[result[i]][0] -= eggs2[i][1];
        }

        int cnt = 0;
        for (int i=0; i<n; i++) {
            if (eggs2[i][0] <= 0) cnt++;
        }
        M = max(M, cnt);

        return;
    }

    for (int i=0; i<n; i++) {
        if (cur == i) continue;
        result[cur] = i;
        func(cur+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> eggs[i][0] >> eggs[i][1];

    func(0);

    cout << M;
    
    return 0;
}