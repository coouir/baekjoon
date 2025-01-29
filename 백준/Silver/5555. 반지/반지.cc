#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;

    string com;
    cin >> com;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string str;
        cin >> str;
        str += str.substr(0, com.length()-1);

        bool check = false;
        for (int j=0; j<str.length() - com.length() + 1; j++) {
            if (com == str.substr(j, com.length())) {
                check = true;
                break;
            }
        }

        if (check) cnt++;
    }
    cout << cnt;

    return 0;
}