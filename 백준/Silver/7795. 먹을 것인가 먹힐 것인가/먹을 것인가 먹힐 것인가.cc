#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        int A[20000], B[20000];

        int N, M;
        cin >> N >> M;
        for (int i=0; i<N; i++)
            cin >> A[i];

        for (int i=0; i<M; i++)
            cin >> B[i];

        sort(A, A+N, greater<>());
        sort(B, B+M, greater<>());

        int cnt = 0;
        int s = 0;
        int e = 0;

        while (s < N && e < M) {
            // 정답
            if (A[s] > B[e]) {
                cnt += (M - e);
            }

            // 이동
            if (A[s] > B[e]) {
                s++;
            } else {
                e++;
            }
        }
        
        cout << cnt << '\n';
    }

    return 0;
}

// 8   7   3   1   1
//     s

// 6   3   1
// e