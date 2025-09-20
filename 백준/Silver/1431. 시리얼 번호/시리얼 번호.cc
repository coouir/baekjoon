#include <bits/stdc++.h>
using namespace std;

string str;
int n;

bool cmp(string a, string b) {
    int num1 = 0;
    int num2 = 0;
    if (a.size() != b.size()) return a.size() < b.size();

    for (int i=0; i<a.size(); i++) {
        if ('0' <= a[i] && a[i] <= '9') num1 += a[i]-'0';
        if ('0' <= b[i] && b[i] <= '9') num2 += b[i]-'0';
    }
    
    if (num1 != num2) return num1 < num2;

    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> v;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i=0; i<n; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}