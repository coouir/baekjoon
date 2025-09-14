#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int isused1[50];
int isused2[50];
int isused3[50];

void func(int cur) {
    if (cur == n) {
        cnt++;
        return;
    }

    for (int i=0; i<n; i++) {
        if (!isused1[i] && !isused2[cur+i] && !isused3[cur-i+n-1]) {
            isused1[i] = 1;
            isused2[cur+i] = 1;
            isused3[cur-i+n-1] = 1;
            func(cur+1);
            isused1[i] = 0;
            isused2[cur+i] = 0;
            isused3[cur-i+n-1] = 0;
        } 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);
    cout << cnt;

    return 0;
}