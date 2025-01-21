#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100001];
    int arr2[100001] = {};

    int N, M;
    cin >> N >> M;
    for (int i=1; i<=N; i++) 
        cin >> arr[i];

    for (int i=1; i<=M; i++) {
        int a, b, k;
        cin >> a >> b >> k;
        arr2[a] += k;
        arr2[b+1] -= k;
    }

    int prefix[100001] = {};
    for (int i=1; i<=N; i++) {
        prefix[i] = arr2[i] + prefix[i-1]; 
        cout << prefix[i] + arr[i] << ' ';
    }
    return 0;
}