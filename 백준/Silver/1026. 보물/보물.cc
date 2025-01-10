#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int N, arrA[50], arrB[50];
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arrA[i];
    }
    for (int i=0; i<N; i++) {
        cin >> arrB[i];
    }
    sort(arrA, arrA+N);
    sort(arrB, arrB+N, greater<int>());

    int ans = 0;
    for (int i=0; i<N; i++) {
        ans += arrA[i]*arrB[i];
    }
    cout << ans;
    return 0;
}