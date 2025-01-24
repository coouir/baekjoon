#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i=1; i<=10000; i++) {
        int check = true;
        for (int j=1; j<i; j++) {
            int sum_val = j;
            int n = j;
            while (n > 0) {
                sum_val += n%10;
                n /= 10;
            }

            if (sum_val == i) {
                check = false;
                break;
            }
        }

        if (check) cout << i << endl;
    }
    return 0;
}