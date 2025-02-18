#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int arr[10000000];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        int n, K;
        cin >> n >> K;
        for (int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        int s = 0;
        int e = n-1;

        int result_s = s;
        int result_e = e;
        
        while (s < e) {
            // 정답
            if (abs(K-(arr[result_s] + arr[result_e])) > abs(K-(arr[s] + arr[e]))) {
                result_s = s;
                result_e = e;
            }

            // 이동
            if (arr[s] + arr[e] >= K) {
                e--;
            } else {
                s++;
            }
        }

        int result = arr[result_s] + arr[result_e];

        int cnt = 0;
        s = 0;
        e = n-1;
        while (s < e) {
            // 정답
            if (abs(K-(result)) == abs(K-(arr[s] + arr[e]))) {
                cnt++;
            }

            // 이동
            if (arr[s] + arr[e] >= K) {
                e--;
            } else {
                s++;
            }
        }
        cout << cnt << '\n';
    }
    

    return 0;
}

// -7  -4  -3  -2  0   1   2   5   9   12
// s   
//                                     e