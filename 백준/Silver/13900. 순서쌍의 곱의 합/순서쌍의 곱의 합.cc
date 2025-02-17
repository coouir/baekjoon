#include <iostream>
using namespace std;

long long arr[110000];
long long prefix[110000];

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) 
        cin >> arr[i];
    
    for (int i=1; i<=N; i++) 
        prefix[i] = prefix[i-1] + arr[i];

    long long result = 0;
    for (int i=1; i<N; i++) {
        result += arr[i] * (prefix[N] - prefix[i]);
    }
    cout << result;

    return 0;
}

// 1 * (2 + 3 + 4) 
// 2 * (3 + 4)
// 3 * (4)

// 2 * (3 + 2 + 4)
// 3 * (2 + 4) 
// 2 * (4)