#include <iostream>
using namespace std;

int main() {
    int max_val = 0;
    int max_idx = 0;

    for (int i=0; i<9; i++) {
        int n;
        cin >> n;

        if (max_val < n) {
            max_val = n;
            max_idx = i+1;
        }
    }

    cout << max_val << '\n' << max_idx;

    return 0;
}