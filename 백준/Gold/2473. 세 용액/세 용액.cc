#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long arr[5000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    sort(arr, arr+N);

    long long min_i = arr[0];
    long long min_s = arr[1];
    long long min_e = arr[N-1];

    long long min_val = abs(min_i + min_e + min_s);

    for (int i=0; i<N-2; i++) {
        int s = i+1;
        int e = N-1;

        while (s < e) {
            // 정답
            if (min_val > abs(arr[i] + arr[e] + arr[s])) {
                min_val = abs(arr[i] + arr[e] + arr[s]);
                min_i = arr[i];
                min_e = arr[e];
                min_s = arr[s];
            }

            // 이동
            if (arr[i] + (arr[e] + arr[s]) >= 0) {
                e--;
            } else {
                s++;
            }
        }
    }
    cout << min_i << ' ' << min_s << ' ' << min_e;
    
    return 0;
}