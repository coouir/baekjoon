#include <bits/stdc++.h>
using namespace std;

string str;
char c, ch;
int m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    list<char> L;
    for (int i=0; i<str.length(); i++) {
        L.push_back(str[i]);
    }
    auto it = L.end();
    
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> c;
        if (c != 'P') {
            if (c == 'L' && it != L.begin()) {
                it--;
            } else if (c == 'D' && it != L.end()) {
                it++;
            } else if (c == 'B' && it != L.begin()) {
                it--;
                it = L.erase(it);
            }
        } else {
            cin >> ch;
            L.insert(it, ch);
        }
    }

    for (auto i : L) {
        cout << i;
    }
    return 0;
}