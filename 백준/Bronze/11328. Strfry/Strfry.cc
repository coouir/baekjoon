#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2) {
            cout << "Possible" << '\n';
        } else {
            cout << "Impossible" << '\n';
        }
    }

    return 0;
}