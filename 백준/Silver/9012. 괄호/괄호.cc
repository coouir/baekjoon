#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        stack<char> s;

        string str;
        cin >> str;

        bool check = true;
        for (int j=0; j<(int)str.size(); j++) {
            if (str[j] == '(') {
                s.push('(');
            } else {
                if (s.empty()) {
                    check = false;
                    break;
                } 
                s.pop();
            }
        }

        if (s.empty() && check) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}