#include <iostream>
#include <algorithm>
using namespace std;

int arr[9];

int main() {
    int sum_val = 0;
    for (int i=0; i<9; i++) {
        cin >> arr[i];
        sum_val += arr[i];
    }

    sort(arr, arr+9);

    int idx1 = -1, idx2 = -1;
    for (int i=0; i<9; i++) {
        for (int j=i+1; j<9; j++) {
            if (sum_val - (arr[i]+arr[j]) == 100) {
                idx1 = i;
                idx2 = j;
                break;
            }
        }
    }

    for (int i=0; i<9; i++) {
        if (i == idx1 || i == idx2) continue;
        cout << arr[i] << '\n';
    }

    return 0;
}