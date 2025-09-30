#include <bits/stdc++.h>
using namespace std;

int L;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> L;
    
    if (L%5 == 0) {
        cout << L/5;
    } else {
        cout << L/5 + 1;
    }

    return 0;
}