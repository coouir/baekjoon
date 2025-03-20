#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int main() {
    int N;
    cin >> N;
    while (N > 0) {
        arr[N%10]++;
        N /= 10;
    }

    if ((arr[9]+arr[6])%2 == 0) {
        int num = (arr[9] + arr[6])/2;
        arr[9] = num;
        arr[6] = num;
    } else {
        int num = (arr[9] + arr[6])/2;
        arr[9] = num+1;
        arr[6] = num;
    }

    int max_val = 0;
    for (int i=0; i<10; i++) {
        max_val = max(max_val, arr[i]);
    }
    cout << max_val;
    
    return 0;
}