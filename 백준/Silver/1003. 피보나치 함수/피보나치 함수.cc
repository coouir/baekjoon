#include <iostream>
using namespace std;

int main() {

    int arr0[50] = {1, 0};
    int arr1[50] = {0, 1};
    for (int i=2; i<=40; i++) {
        arr0[i] = arr0[i-1] + arr0[i-2];
        arr1[i] = arr1[i-1] + arr1[i-2];
    }

    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        int N;
        cin >> N;
        
        cout << arr0[N] << ' ' << arr1[N] << '\n';
    }
    return 0;
}


// DP  0   1   2   3   4   5   6   7   8   9   
// 0   1   0   1   1
// 1   0   1   1   2