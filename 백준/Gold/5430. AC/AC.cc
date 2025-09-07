#include <bits/stdc++.h>
using namespace std;

int t, n;
string p, str, input, buffer;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        istringstream ss;
        bool check = true;
        bool LR = true;
        deque<string> DQ;
        
        cin >> p;
        cin >> n;
        cin >> input;

        ss.str(input.substr(1, input.length()-2));
        while(getline(ss, buffer, ',')) {
            DQ.push_back(buffer);
        }

        for (int i=0; i<p.length(); i++) {
            if (!check) break;

            if (p[i] == 'R') {
                if (LR == true) {
                    LR = false;
                } else if (LR == false) {
                    LR = true;
                }            
            } else {
                if (DQ.empty()) {
                    check = false;
                } else {
                    n--;
                    if (LR == true) {
                        DQ.pop_front();
                    } else {
                        DQ.pop_back();
                    }
                }
            }
        }
        if (check) {
            cout << '[';
            if (LR == true) {
                for (int i=0; i<n; i++) {
                    cout << DQ[i];
                    if (i != n-1) cout << ',';
                }
            } else {
                for (int i=n-1; i>=0; i--) {
                    cout << DQ[i];
                    if (i != 0) cout << ',';
                }
            }
            cout << ']' << '\n';
        } else {
            cout << "error" << '\n';
        }
    }

    return 0;
}