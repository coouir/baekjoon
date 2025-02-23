#include <iostream>
#include <algorithm>
using namespace std;

int arr[2000];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N); // 정렬

    int cnt = 0;
    
    for (int i = 0; i < N; i++) {
        int s = 0; 
        int e = N - 1;
        if (s == i) s++;
        if (e == i) e--;
        
        while (s < e) {
        	// 정답
            if (arr[s] + arr[e] == arr[i]) {
                cnt++;
            }

            // 이동
            if (arr[s] + arr[e] > arr[i]) {
                e--; // 합이 크면 줄여야 함
                if (e == i) e--;
            } else if (arr[s] + arr[e] < arr[i]) {
                s++; // 합이 작으면 늘려야 함
                if (s == i) s++;
            } else {
                break;
            }
        }
    }
    cout << cnt;
    
    return 0;
}
