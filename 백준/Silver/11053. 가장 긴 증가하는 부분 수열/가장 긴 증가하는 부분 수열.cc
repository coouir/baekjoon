#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[1000];
    int arr[1000] = {1};

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> A[i];

    int max_val = 0;
    for (int i=1; i<N; i++) {
        int max_cnt = 0;
        for (int j=0; j<i; j++) {
            if (A[j] < A[i]) max_cnt = max(max_cnt, arr[j]);
        }
        if (max_cnt == 0) {
            arr[i] = 1;
        } else {
            arr[i] = max_cnt + 1;
        }
        max_val = max(max_val, arr[i]);
    }

    cout << (N==1? 1: max_val);

    return 0;
}

// DP  0   1   2   3   4   5
//     10  20  10  30  20  50
//     1   2   1   3   2   4