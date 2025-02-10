#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    string str;
    int n;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> str;
        if (str == "push_front") {
            cin >> n;
            dq.push_front(n);
        } else if (str == "push_back") {
            cin >> n;
            dq.push_back(n);
        } else if (str == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            } else {
                cout << -1 << '\n';
            }
        } else if (str == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            } else {
                cout << -1 << '\n';
            }
        } else if (str == "size") {
            cout << dq.size() << '\n';
        } else if (str == "empty") { 
            cout << dq.empty() << '\n';
        } else if (str == "front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else if (str == "back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}