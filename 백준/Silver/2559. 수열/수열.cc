#include <iostream>
#include <algorithm>
using namespace std;

int prefix[100010];
int arr[100010];

int main() {

    int N, K;
    cin >> N >> K;
    for (int i=1; i<=N; i++) 
        cin >> arr[i];

    for (int i=1; i<=N; i++) 
        prefix[i] = prefix[i-1] + arr[i];

    int max_val = -(1<<30);
    for (int i=K; i<=N; i++) {
        max_val = max(max_val, prefix[i] - prefix[i-K]);
    }
    cout << max_val;
    
    return 0;
}