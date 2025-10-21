#include <bits/stdc++.h>
using namespace std;

int t;
string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> str;
        cout << str[0] << str[str.length() - 1] << '\n';
    }

    return 0;
}