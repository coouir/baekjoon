#include <bits/stdc++.h>
using namespace std;

int n;
string str[20010];

bool cmp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str[i];
    }

    sort(str, str+n, cmp);

    for (int i=0; i<n; i++) {
        if (i != 0 && str[i-1] == str[i]) continue;
        cout << str[i] << '\n';
    }

    return 0;
}