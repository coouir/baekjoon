#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

int main() {
    string arr[20000];
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N, cmp);
    for (int i=0; i<N; i++) {
        if (arr[i] == arr[i+1]) continue;
        cout << arr[i] << endl;
    }
    return 0;
}