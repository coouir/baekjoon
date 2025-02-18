#include <iostream>
#include <algorithm>
using namespace std;

int arr[5000];

int main() {
    int N, C;
    cin >> N >> C;
    for (int i=0; i<N; i++) 
        cin >> arr[i];

    sort(arr, arr+N);

    int cnt = 0;
    for (int i=0; i<N; i++) {
        if (arr[i] == C) {
            cnt++;
            continue;
        }

        int s = i+1; 
        int e = N-1;
        while (s < e && (s < N && e < N)) {
            // 정답
            if (arr[i] + arr[s] == C || arr[i] + arr[e] == C || arr[i] + arr[s] + arr[e] == C) {
                cnt++;
                break;
            }

            // 이동
            if (arr[i] + arr[s] + arr[e] > C) {
                e--;
            } else {
                s++;
            }
        }
    }
    cout << (cnt? 1:0);

    return 0;
}