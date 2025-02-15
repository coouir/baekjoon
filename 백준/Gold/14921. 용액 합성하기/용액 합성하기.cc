#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int arr[100000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    sort(arr, arr+N);

    int min_val = 1 << 30;

    int s = 0;
    int e = N-1;
    while (s < e) {
        // 정답
        if (abs(min_val) > abs(arr[e] + arr[s])) {
            min_val = arr[e] + arr[s];
        }

        // 이동
        if (arr[e] + arr[s] >= 0) {
            e--;
        } else {
            s++;
        }
    }
    cout << min_val;
    
    return 0;
}