#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, arr[1000];
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+N);
    int ans = 0;
    int sum_val = 0;
    for (int i=0; i<N; i++) {
        sum_val += arr[i];
        ans += sum_val;
    }
    cout << ans;
    return 0;
}