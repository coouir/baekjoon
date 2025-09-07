#include <bits/stdc++.h>
using namespace std;

int n, x;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;

    cin >> n;
    while(n--) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            S.push(x);
        } else if (str == "pop") {
            if (S.empty()) {
                cout << -1 << '\n';
            } else {
                cout << S.top() << '\n';
                S.pop();
            }
        } else if (str == "size") {
            cout << S.size() << '\n';
        } else if (str == "empty") {
            if (S.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else {
            if (S.empty()) {
                cout << -1 << '\n';
            } else {
                cout << S.top() << '\n';
            }
        }
    }
    return 0;
}