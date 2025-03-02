#include <iostream>
using namespace std;

int arr[100010];
int prefix[100010];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    for (int i=1; i<N; i++) {
        prefix[i] = prefix[i-1];
        if (arr[i] > arr[i+1]) {
            prefix[i]++;
        }
    }
    prefix[N] = prefix[N-1];

    int Q;
    cin >> Q;
    for (int q=1; q<=Q; q++) {
        int x, y;
        cin >> x >> y;
        if (x == y) cout << 0 << '\n';
        else cout << prefix[y-1] - prefix[x-1] << '\n';
    }

    return 0;
}

// 1   2   3   4   1   10  8   1
// 0   0   0   1   1   2   3   3