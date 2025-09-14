#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int result[10];
int isused[10010];

void func(int cur) {
    if (cur == m) {
        for (int i=0; i<m; i++) {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i=0; i<n; i++) {
        if (isused[arr[i]]) continue;
        if (cur != 0 && result[cur-1] >= arr[i]) continue;
        
        result[cur] = arr[i];
        isused[arr[i]] = 1;
        func(cur + 1);
        isused[arr[i]] = 0;
        
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