#include <iostream>
#include <algorithm>
using namespace std;

int arr[100010];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    sort(arr, arr+N);

    int min_val = 1 << 30;
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (arr[e]-arr[s] >= M) min_val = min(min_val, arr[e]-arr[s]);

        // 이동
        if (arr[e]-arr[s] >= M) {
            s++;
        } else {
            e++;
        }
    }
    cout << min_val;

    return 0;
}

// 1   2   3   4   5
//     s
//                 e