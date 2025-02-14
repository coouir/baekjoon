#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100000];

    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    
    int x;
    cin >> x;

    int cnt = 0;
    int s = 0;
    int e = n-1;
    while (s < e) {
        // 정답
        if (arr[s] + arr[e] == x) cnt++;

        // 이동
        if (arr[s] + arr[e] > x) {
            e--;
        } else if (arr[s] + arr[e] < x) {
            s++;
        } else {
            e--;
            s++;
        }
    }
    cout << cnt;

    return 0;
}

// 1   2   3   5   7   9   10  11  12
//         s  
//                         e