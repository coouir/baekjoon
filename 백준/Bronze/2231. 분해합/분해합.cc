#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i=1; i<N; i++) {
        int sum_val = i;
        int n = i;
        while (n > 0) {
            sum_val += n%10;
            n /= 10;
        }

        if (sum_val == N) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    
    return 0;
}