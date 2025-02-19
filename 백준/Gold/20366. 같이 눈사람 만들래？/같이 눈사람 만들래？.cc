#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int arr[10000];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];

    sort(arr, arr+N);

    int min_val = 1<<30;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {

            int s = 0;
            int e = N-1;
            while (s == i || s == j) s++;
            while (e == i || e == j) e--;
            while (s < e) {
                // 정답
                if (min_val > abs(arr[i]+arr[j] - (arr[s] + arr[e]))) {
                    min_val = abs(arr[i]+arr[j] - (arr[s] + arr[e]));
                }

                // 이동
                if (arr[i]+arr[j] <= arr[s] + arr[e]) {
                    e--;
                    while (e == i || e == j) e--;
                } else {
                    s++;
                    while (s == i || s == j) s++;
                }
            }
        }
    }
    cout << min_val;
    
    return 0;
}



// 2   3   5   5   9
//     i
//             j
// s       e
