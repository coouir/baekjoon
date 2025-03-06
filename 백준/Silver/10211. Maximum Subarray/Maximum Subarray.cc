#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t=1; t<=T; t++) {
        int arr[1010] = {};
        int prefix[1010] = {};

        int N;
        cin >> N;
        for (int i=1; i<=N; i++) {
            cin >> arr[i];
            prefix[i] = arr[i] + prefix[i-1];
        }

        long long max_val = arr[1];
        for (int i=1; i<=N; i++) {
            for (int j=i; j<=N; j++) {
                max_val = max(max_val, (long long) (prefix[j] - prefix[i-1]));
            }
        }
        cout << max_val << '\n';
    }

    return 0;
}