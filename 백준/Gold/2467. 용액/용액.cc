#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int arr[100000];

    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    sort(arr, arr+N);

    int min_e = arr[N-1];
    int min_s = arr[0];
    int min_val = abs(min_e + min_s);

    int s = 0;
    int e = N-1;
    while (s < e) {
        // 정답
        if (min_val > abs(arr[e] + arr[s])) {
            min_val = abs(arr[e] + arr[s]);
            min_e = arr[e];
            min_s = arr[s];
        }

        // 이동
        if (arr[e] + arr[s] >= 0) {
            e--;
        } else {
            s++;
        }
    }
    cout << min_s << ' ' << min_e;
    
    return 0;
}