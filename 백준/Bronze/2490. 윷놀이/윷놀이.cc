#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<3; i++) {
        int sum_val = 0;

        for (int j=0; j<4; j++) {
            int n;
            cin >> n;
            sum_val += n;
        }

        if (sum_val == 3) {
            cout << "A\n";
        } else if (sum_val == 2) {
            cout << "B\n";
        } else if (sum_val == 1) {
            cout << "C\n";
        } else if (sum_val == 0) {
            cout << "D\n";
        } else if (sum_val == 4) {
            cout << "E\n";
        }
    }
    
    return 0;
}