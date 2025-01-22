#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // a: 97
    // z: 122
    
    int prefix[26][2010] = {};

    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        int index = int(str[i])-97;
        for (int j=0; j<26; j++) {
            if (j == index) {
                prefix[j][i+1] = 1 + prefix[j][i];
            } else {
                prefix[j][i+1] = 0 + prefix[j][i];
            }
        }
    }
    
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        char a; int l, r;
        cin >> a >> l >> r;
        int index = int(a)-97;
        cout << prefix[index][r+1] - prefix[index][l] << '\n';
    }

    return 0;
}