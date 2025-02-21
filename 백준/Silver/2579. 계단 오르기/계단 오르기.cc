#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[500];
    int DP[500];

    int N;
    cin >> N;
    for (int i=1; i<=N; i++)
        cin >> arr[i];

    DP[1] = arr[1];
    DP[2] = arr[1] + arr[2];
    DP[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

    for (int i=4; i<=N; i++) {
        DP[i] = max(DP[i-2], DP[i-3] + arr[i-1]) + arr[i];
    }

    cout << DP[N];
    
    return 0;
}
