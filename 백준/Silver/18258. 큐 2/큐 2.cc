#include <bits/stdc++.h>
using namespace std;

int n, x;
string  str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;

    cin >> n;
    while(n--) {
        cin >> str;
        
        if (str == "push") {
            cin >> x;
            Q.push(x);
        } else if (str == "pop") {
            if (Q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        } else if (str == "size") {
            cout << Q.size() << '\n';
        } else if (str == "empty") {
            if (Q.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (str == "front") {
            if (Q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << Q.front() << '\n';
            }
        } else if (str == "back") {
            if (Q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << Q.back() << '\n';
            }
        }
    }

    return 0;
}