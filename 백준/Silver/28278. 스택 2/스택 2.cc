#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> s;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            int n;
            cin >> n;
            s.push(n);
        } else if (x == 2) {
            if (!s.empty()) {
                int n = s.top();
                cout << n << '\n';
                s.pop();
            } else {
                cout << -1 << '\n';
            }
        } else if (x == 3) {
            cout << s.size() << '\n';
        } else if (x == 4) {
            if (!s.empty()) {
                cout << 0 << '\n';
            } else {
                cout << 1 << '\n';
            }
        } else if (x == 5) {
            if (!s.empty()) {
                cout << s.top() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}