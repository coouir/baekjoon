#include <bits/stdc++.h>
using namespace std;

string a, b;
int arr1[26], arr2[26], cnt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a;
    cin >> b;
    for (int i=0; i<a.length(); i++) {
        arr1[a[i] - 'a']++;
    }
    for (int i=0; i<b.length(); i++) {
        arr2[b[i] - 'a']++;
    }

    for (int i=0; i<26; i++) {
        cnt += abs(arr1[i] - arr2[i]);
    }
    cout << cnt;

    return 0;
}