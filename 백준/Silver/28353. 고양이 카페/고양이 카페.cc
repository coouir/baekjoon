#include <iostream>
#include <algorithm>
using namespace std;

int arr[5000];

int main() {
    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    sort(arr, arr+N);

    int cnt = 0;
    int s = 0;
    int e = N-1;
    while (s < e) {
        // 정답
        if (arr[s] + arr[e] <= K) {
            cnt++;
        }

        // 이동
        if (arr[s] + arr[e] <= K) {
            s++;
            e--;
        } else if (arr[s] + arr[e] > K) {
            e--;
        } 
    }
    cout << cnt;

    return 0;
}


// 2   4   8   11  16
//     s
//             e


// 3   4   5   6   7   9
// s   
//             e