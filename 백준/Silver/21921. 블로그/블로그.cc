#include <iostream>
#include <algorithm>
using namespace std;

int arr[300000];
int prefix[300000];

int main() {
    int N, X;
    cin >> N >> X;
    for (int i=1; i<=N; i++) 
        cin >> arr[i];
    
    for (int i=1; i<=N; i++)
        prefix[i] = prefix[i-1] + arr[i];

    int max_val = 0;
    
    for (int i=X; i<=N; i++) {
        max_val = max(max_val, prefix[i] - prefix[i-X]);
    }

    int cnt = 0;
    for (int i=X; i<=N; i++) {
        if (max_val == prefix[i] - prefix[i-X]) cnt++;
    }
    
    if (max_val == 0) {
        cout << "SAD";
    } else {
        cout << max_val << '\n' << cnt;
    }

    return 0;
}