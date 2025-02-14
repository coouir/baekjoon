#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000];

int main() {
    int N, S;
    cin >> N >> S;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    
    int m = 1000000, total = arr[0];
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (total >= S) m = min(m, e-s+1);

        // 이동
        if (total < S) {
            e++;
            total += arr[e];
        } else {
            total -= arr[s];
            s++;
        }
    }
    if (m == 1000000) m = 0;

    cout << m;

    return 0;
}

// 5   1   3   5   10  7   4   9   2   8
//             s
//                 e