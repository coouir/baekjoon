#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int result[10];
int isused[10];

void func(int cur) {
    if (cur == m) {
        for (int i=0; i<m; i++) 
            cout << result[i] << ' ';
        cout << '\n';
        return;
    }

    int last = 0;
    for (int i=0; i<n; i++) {
        if (isused[i]) continue;
        if (arr[i] != last) {
            result[cur] = arr[i];
            last = arr[i];
            isused[i] = 1;
            func(cur + 1);
            isused[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    func(0);

    return 0;
}