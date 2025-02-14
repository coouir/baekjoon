#include <iostream>
using namespace std;

int main() {
    int A[10010] = {};
    
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> A[i];

    
    int cnt = 0, total = A[0];

    int s = 0;
    int e = 0;

    while (e < N) {
        // 정답
        if (total == M) cnt++;

        // 이동
        if (total < M) {
            e++;
            total += A[e];
        } else {
            total -= A[s];
            s++;
        }
    }
    cout << cnt;

    return 0;
}