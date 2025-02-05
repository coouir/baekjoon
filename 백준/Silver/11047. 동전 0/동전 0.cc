#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];

    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    
    int cnt = 0;
    for (int i=N-1; i>=0; i--) {
        if (arr[i] > K) continue;
        cnt += (K / arr[i]);
        K -= (K / arr[i]) * arr[i];
    }
    cout << cnt; 
    
    return 0;
}


// 4200 = 4*1000 + 2*100
// 4790 = 4*1000 + 1*500 + 2*100 + 1*50 + 4*10