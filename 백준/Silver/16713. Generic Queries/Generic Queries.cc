#include <iostream>
using namespace std;

int arr[1000010];
int prefix[1000010];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, Q;
    cin >> N >> Q;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i-1] ^ arr[i];
    }

    int ans = 0;
    for (int q=1; q<=Q; q++) {
        int s, e;
        cin >> s >> e;
        ans ^= prefix[e] ^ prefix[s-1];
    }
    cout << ans;

    return 0;
}