#include <bits/stdc++.h>
using namespace std;

int n, cnt1, cnt2, cnt3;
int arr[3000][3000];

void func(int n, int x, int y, int xx, int yy) {
    if (n == 1) {
        if (arr[x][y] == -1) cnt1++;
        else if (arr[x][y] == 0) cnt2++;
        else cnt3++;
        return;
    }
    bool check = true;
    int init = arr[x][y];
    for (int i=x; i<=xx; i++) {
        for (int j=y; j<=yy; j++) {
            if (i == x && j == y) continue;
            if (init != arr[i][j]) check = false;
        }
    }

    if (check) {
        if (init == -1) cnt1++;
        else if (init == 0) cnt2++;
        else cnt3++;
    } else {        
        int a = n/3 - 1;
        int b = n/3;
        func(n/3, x, y, x+a, y+a);
        func(n/3, x, y+b, x+a, y+b+a);
        func(n/3, x, y+2*b, x+a, y+2*b+a);
        func(n/3, x+b, y, x+b+a, y+a);
        func(n/3, x+b, y+b, x+b+a, y+b+a);
        func(n/3, x+b, y+2*b, x+b+a, y+2*b+a);
        func(n/3, x+2*b, y, x+2*b+a, y+a);
        func(n/3, x+2*b, y+b, x+2*b+a, y+b+a);
        func(n/3, x+2*b, y+2*b, x+2*b+a, y+2*b+a);
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> arr[i][j];
        }
    }

    func(n, 1, 1, 9, 9);

    cout << cnt1 << '\n' << cnt2 << '\n' << cnt3;

    return 0;
}