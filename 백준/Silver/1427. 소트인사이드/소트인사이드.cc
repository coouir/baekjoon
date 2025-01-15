#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int arr[10];

    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        arr[i] = str[i]-'0';
    }
    sort(arr, arr+str.length());
    for (int i=0; i<str.length(); i++) {
        cout << arr[str.length()-1-i];
    }
    return 0;
}