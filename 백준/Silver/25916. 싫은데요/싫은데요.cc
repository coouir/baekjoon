#include <iostream>
#include <algorithm>
using namespace std;

int arr[500000];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> arr[i];

    int max_val = 0;
    int sum_val = arr[0];
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (sum_val <= M) {
            max_val = max(max_val, sum_val);
        }

        // 이동
        if (sum_val <= M) {
            e++;
            sum_val += arr[e];
        } else {
            sum_val -= arr[s];
            s++;
        }
    }
    cout << max_val;
    
    return 0;
}

// 2   2   2   2   11  2   5   2
// s
//             e