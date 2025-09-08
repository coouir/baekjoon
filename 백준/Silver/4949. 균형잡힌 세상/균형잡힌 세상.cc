#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        stack<char> s;
        bool check = true;

        getline(cin, str);
        if (str == ".") break;
        for (int i=0; i<str.size(); i++) {
            if (str[i] == '(') {
                s.push('(');
            } else if (str[i] == '[') {
                s.push('[');
            } else if (str[i] == ')') {
                if (s.empty()) {
                    check = false;
                    break;
                } else {
                    if (s.top() == '(') {
                        s.pop();
                    } else {
                       check = false;
                        break; 
                    }
                }
            } else if (str[i] == ']') {
                if (s.empty()) {
                    check = false;
                    break;
                } else {
                    if (s.top() == '[') {
                        s.pop();
                    } else {
                       check = false;
                        break; 
                    }
                }
            } 
        }
        
        if (check && s.empty()) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}