#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000010];

int main() {
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (int i=4; i<=1000000; i++) {
        if (i%2 == 0 && i%3 == 0) {
            arr[i] = min(arr[i-1], min(arr[i/2], arr[i/3])) + 1;
        } else if (i%2 == 0 && i%3 != 0) {
            arr[i] = min(arr[i-1], arr[i/2]) + 1;
        } else if (i%2 != 0 && i%3 == 0) {
            arr[i] = min(arr[i-1], arr[i/3]) + 1;
        } else {
            arr[i] = arr[i-1] + 1;
        }
    }

    int N;
    cin >> N;
    
    cout << arr[N];
    
    return 0;
}

// DP  1   2   3   4   5   6   7   8   9   10  ...
//     0   1   1   2   3   2   3   3   2   3   ...
