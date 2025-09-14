#include <bits/stdc++.h>
using namespace std;

int k;
int arr[15];
int result[6];
int isused[15];

void func(int cur) {
    if (cur == 6) {
        for (int i=0; i<6; i++)
            cout << result[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i=0; i<k; i++) {
        if (cur != 0 && result[cur-1] >= arr[i]) continue;
        result[cur] = arr[i];
        func(cur+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> k;
        if (k == 0) break;

        for (int i=0; i<k; i++) 
            cin >> arr[i];
        
        func(0);
        cout << '\n';
    }

    return 0;
}