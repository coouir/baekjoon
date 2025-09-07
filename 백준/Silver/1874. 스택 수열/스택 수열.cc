#include <bits/stdc++.h>
using namespace std;

int n, num = 1, idx_arr, idx_result;
int arr[100010];
char result[200010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    stack<int> S;
    while (n--) {
        result[idx_result++] = '+';
        S.push(num++);

        while (!S.empty() && arr[idx_arr] == S.top()) {
            S.pop();
            result[idx_result++] = '-';
            idx_arr++;
        }
    }
    
    if (S.empty()) {
        for (int i=0; i<idx_result; i++) {
            cout << result[i] << '\n';
        }
    } else {
        cout << "NO";
    }

    return 0;
}