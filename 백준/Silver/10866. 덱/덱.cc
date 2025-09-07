#include <bits/stdc++.h>
using namespace std;

int n, x;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> DQ;

    cin >> n;
    while (n--) {
        cin >> str;
        if (str == "push_front") {
            cin >> x;
            DQ.push_front(x);
        } else if (str == "push_back") {
            cin >> x;
            DQ.push_back(x);
        } else if (str == "pop_front") {
            if (DQ.empty()) {
                cout << -1 << '\n';
            } else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        } else if (str == "pop_back") {
            if (DQ.empty()) {
                cout << -1 << '\n';
            } else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        } else if (str == "size") {
            cout << DQ.size() << '\n';
        } else if (str == "empty") {
            if (DQ.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (str == "front") {
            if (DQ.empty()) {
                cout << -1 << '\n';
            } else {
                cout << DQ.front() << '\n';
            }
        } else if (str == "back") {
            if (DQ.empty()) {
                cout << -1 << '\n';
            } else {
                cout << DQ.back() << '\n';
            }
        }
    }

    return 0;
}