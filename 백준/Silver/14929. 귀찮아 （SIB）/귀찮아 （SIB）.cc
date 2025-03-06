#include <iostream>
using namespace std;

int arr[100010];
int prefix[100010];

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        prefix[i] = arr[i] + prefix[i-1];
    }

    long long sum_val = 0;
    for (int i=1; i<n; i++) {
        sum_val += arr[i] * (prefix[n] - prefix[i]);
    }
    cout << sum_val;

    return 0;
}