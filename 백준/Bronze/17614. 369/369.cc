#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;

    cin >> n;
    for (int i=1; i<=n; i++) {

        int num = i;
        while (num > 0) {
            if (num%10 != 0 && (num%10)%3 == 0) cnt++;
            num /= 10;
        }
    }
    cout << cnt;

    return 0;
}