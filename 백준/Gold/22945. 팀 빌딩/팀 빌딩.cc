#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    int max_val = 0;
    int s = 0;
    int e = N-1;
    while (s < e) {
        // 정답
        max_val = max(max_val, (e-s-1) * min(arr[s], arr[e]));
        // 이동
        if (arr[s] < arr[e]) {
            s++;
        } else {
            e--;
        }
    }
    cout << max_val;

    return 0;
}