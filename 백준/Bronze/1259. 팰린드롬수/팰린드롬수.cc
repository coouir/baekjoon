#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string str;
        cin >> str;
        if (str == "0") break;

        bool check = true;
        for (int i=0; i < str.length()/2; i++) {
            if (str[i] != str[str.length()-1-i]) {
                check = false;
                break;
            }
        }
        cout << (check?"yes":"no") << endl;
    }
    return 0;
}