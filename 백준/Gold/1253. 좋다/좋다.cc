#include <iostream>
#include <algorithm>
using namespace std;

int arr[2000];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    sort(arr, arr+N);

    int cnt = 0;
    for (int i=0; i<N; i++) {
        int s = 0;
        int e = N-1;
        if (s == i) s++;
        if (e == i) e--;

        while (s < e) {
            // 정답
            if (arr[s] + arr[e] == arr[i]) {
                cnt++;
            }

            // 이동
            if (arr[s] + arr[e] > arr[i]) {
                e--;
                if (e == i) e--;
            } else if (arr[s] + arr[e] < arr[i]) {
                s++;
                if (s == i) s++;
            } else {
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}



// 1   2   3   4   5   6   7   8   9   10
//                             i
// s
//                                     e

// -1  0   1   2   3
//                 i
//         s
//             e