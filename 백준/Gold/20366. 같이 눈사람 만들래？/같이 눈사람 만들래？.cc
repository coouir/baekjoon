#include <iostream>
#include <algorithm>
#include <cstdlib>  // abs() 사용
using namespace std;

int arr[10000];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) 
        cin >> arr[i];

    sort(arr, arr+N); // 눈덩이 크기 정렬

    int min_val = 1<<30; // 초기 최소값 설정

    // 첫 번째 눈사람 (i, j) 선택
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {

            // 두 번째 눈사람 (s, e) 선택 (투 포인터)
            int s = 0, e = N-1;
            while (s == i || s == j) s++; // i, j 중복 회피
            while (e == i || e == j) e--; // i, j 중복 회피

            while (s < e) {
                int sum1 = arr[i] + arr[j]; // 첫 번째 눈사람
                int sum2 = arr[s] + arr[e]; // 두 번째 눈사람

                // 최소 차이 갱신
                min_val = min(min_val, abs(sum1 - sum2));

                // 투 포인터 이동
                if (sum1 <= sum2) {
                    e--;
                    while (e == i || e == j) e--; // i, j 중복 방지
                } else {
                    s++;
                    while (s == i || s == j) s++; // i, j 중복 방지
                }
            }
        }
    }

    cout << min_val; // 최소 차이 출력
    return 0;
}
