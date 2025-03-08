#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int sum_val = 0;
    int max_val = 100;

    for (int i=0; i<7; i++) {
        int n;
        cin >> n;

        if (n%2 == 1) {
            sum_val += n;
            max_val = min(max_val, n);
        }
    }
    
    if (sum_val != 0) cout << sum_val << '\n';
    cout << (max_val != 100 ? max_val : -1);

    return 0;
}