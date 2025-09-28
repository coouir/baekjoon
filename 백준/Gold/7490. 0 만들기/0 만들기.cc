#include <bits/stdc++.h>
using namespace std;

int t, n;
int result[15];

void func(int cur) {
    if (cur == n-1) {
        string str1 ="1";
        for (int i=0; i<n-1; i++) {
            if (result[i] == 0) {
                str1 += " ";
            } else if (result[i] == 1) {
                str1 += "+";
            } else {
                str1 += "-";
            }
            str1 += '0'+i+2;
        }

        string str2 = "";
        for (int i=0; i<str1.size(); i++) {
            if (i%2 == 0) {
                str2 += str1[i];
            } else {
                if (str1[i] == '+') str2 += '+';
                else if (str1[i] == '-') str2 += '-';
            }
        }

        vector<int> v;
        vector<char> v2;

        int i=0;
        while (i < str2.size()) {
            if ('0' <= str2[i] && str2[i] <= '9') {
                int num = str2[i]-'0';
                
                for (int j=i+1; j<str2.size(); j++) {
                    if ('0' <= str2[j] && str2[j] <= '9') {
                        num = num*10 + str2[j]-'0';
                        if (j == str2.size()-1) {
                            i = str2.size();
                            break;
                        }
                    } else {
                        i = j-1;
                        break;
                    }
                }
                i++;
                v.push_back(num);
            } else {
                v2.push_back(str2[i]);
                i++;
            }
        }

        int s = v[0];
        for (int i=0; i<v2.size(); i++) {
            if (v2[i] == '+') {
                s += v[i+1];
            } else {
                s -= v[i+1];
            }
        }

        if (s == 0) {
            cout << str1 << '\n';
        }

        return;
    }

    for (int i=0; i<3; i++) {
        result[cur] = i;
        func(cur+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> n;
        func(0);
        cout << '\n';
    }

    return 0;
}