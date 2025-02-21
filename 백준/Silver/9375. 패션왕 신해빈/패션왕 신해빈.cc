#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        map<string, int> m;
        string name, c;

        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> name >> c;
            if (m.find(c) != m.end()) {
                m[c]++;
            } else {
                m.insert({c, 1});
            }
        }

        int cnt = 1;
        for (auto iter : m) 
            cnt *= (iter.second+1);

        cout << cnt - 1 << '\n';
    }
    
    return 0;
}