#include <iostream>
using namespace std;

int main() {
    int arr[11] = {1, 1, 2};
    for (int i=3; i<=10; i++) arr[i] = arr[i-1] + arr[i-2] + arr[i-3];

    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        int n;
        cin >> n;
        cout << arr[n] << '\n';
    }
    return 0;
}

// DP  0   1   2   3   4   5   6   7   8   9   10
//     1   1   2   4   7   