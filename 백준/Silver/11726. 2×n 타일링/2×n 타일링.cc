#include <iostream>
using namespace std;

int main() {
    int arr[1100] = {1, 1};
    
    for (int i=2; i<=1000; i++) {
        arr[i] = (arr[i-1] + arr[i-2])%10007;
    }

    int n;
    cin >> n;
    cout << arr[n];

    return 0;
}

// DP  0   1   2   3   4   5   6   7   8   9   ...
//     1   1   2   3   5   8   13  21  34  55  ...