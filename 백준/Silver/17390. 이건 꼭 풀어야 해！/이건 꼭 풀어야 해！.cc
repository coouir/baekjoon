#include <iostream>
#include <algorithm>
using namespace std;

int arr[300010];
int prefix[300010];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, Q;
    cin >> N >> Q;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }
    sort(arr+1, arr+N+1);

    for (int i=1; i<=N; i++) {
        prefix[i] = arr[i] + prefix[i-1];
    }

    for (int i=1; i<=Q; i++) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L-1] << '\n';
    }

    return 0;
}