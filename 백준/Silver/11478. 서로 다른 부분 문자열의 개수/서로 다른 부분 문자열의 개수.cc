#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<string> us;

    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        for (int j=i; j<str.length(); j++) {
            us.insert(str.substr(i, j-i+1));
        }
    }
    cout << us.size();
    
    return 0;
}
