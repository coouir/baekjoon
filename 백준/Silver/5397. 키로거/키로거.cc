#include <bits/stdc++.h>
using namespace std;

string str;
int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> str;
        
        list<char> L;
        auto it = L.end();
        
        for (auto ch : str) {
            if (ch == '<') {
                if (it != L.begin()) {
                    it--;
                }
            } else if (ch == '>') {
                if (it != L.end()) {
                    it++;
                }
            } else if (ch == '-') {
                if (it != L.begin()) {
                    it--;
                    it = L.erase(it);
                }
            } else {
                L.insert(it, ch);
            }
        }

        for (auto it : L) {
            cout << it;
        }
        cout << '\n';
    }

    return 0;
}