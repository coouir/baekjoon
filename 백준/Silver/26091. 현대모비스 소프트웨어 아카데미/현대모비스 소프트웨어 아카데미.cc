#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> arr[i];
    
    sort(arr, arr+N);

    int cnt = 0;
    int s = 0;
    int e = N-1;
    while (s < e) {
        // 정답
        if (arr[s] + arr[e] >= M) {
            cnt++;
        }

        // 이동
        if (arr[s] + arr[e] >= M) {
            s++;
            e--;
        } else {
            s++;
        }
    }
    cout << cnt;

    return 0;
}