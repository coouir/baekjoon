#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    if (str[0] == 'x') cout << 1;
    else if (str[0] == '-' && str[1] == 'x') {
        cout << -1;
        return 0;
    }
    bool check = true;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'x') {
            check = false;
            break;
        }
    }
    if (check) {
        cout << 0;
        return 0;
    }
    for (int i=0; i<str.length(); i++) {
        if (str[i] == '-') cout << '-';
        else if (str[i] == '+') cout << '+';
        else if ('0' <= str[i] && str[i] <= '9') cout << str[i];
        else break;
    }
    return 0;
}
