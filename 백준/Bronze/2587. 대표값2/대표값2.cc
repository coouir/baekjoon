#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];

int main() {
    int sum_val = 0;
    for (int i=0; i<5; i++) { 
        cin >> arr[i];
        sum_val += arr[i];
    }

    sort(arr, arr+5);

    cout << sum_val/5 << '\n';
    cout << arr[2];

    return 0;
}