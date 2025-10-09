#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int coin[6] = {500, 100, 50, 10, 5, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;

    n = 1000 - n;
    for (int i=0; i<6; i++) {
        cnt += n/coin[i];
        n = n % coin[i];
    }
    cout << cnt;

    return 0;
}