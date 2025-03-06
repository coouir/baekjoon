#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) 
        cin >> arr[i];

    long long max_val = 0;

    long long sum_val = 0;
    int s = 0;
    int e = m-1;
    for (int i=s; i<=e; i++) {
        sum_val += arr[i];
    }
    max_val = sum_val;

    while (e < n) {
        e++;
        sum_val += arr[e];
        sum_val -= arr[s];
        s++;

        max_val = max(max_val, sum_val);
    } 
    cout << max_val;

    return 0;
}