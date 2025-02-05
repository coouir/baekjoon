#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

unordered_set<string> s;
string str1, str2;
string arr[1000000];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str1 >> str2;
        if (str2 == "enter") {
            s.insert(str1);   
        } else {
            s.erase(str1);
        }
    }

    int index = 0;
    for (string x : s) {
        arr[index++] = x;
    }
    sort(arr, arr+index);

    for (int i=index-1; i>=0; i--) {
        cout << arr[i] << '\n';
    }

    return 0;
}