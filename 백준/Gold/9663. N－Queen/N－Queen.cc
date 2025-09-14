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

    for (int i=cur; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (!isused1[j] && !isused2[i+j] && !isused3[i-j+n-1]) {
                isused1[j] = 1;
                isused2[i+j] = 1;
                isused3[i-j+n-1] = 1;
                func(cur+1);
                isused1[j] = 0;
                isused2[i+j] = 0;
                isused3[i-j+n-1] = 0;
            } 

            if (j == n-1) return;
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