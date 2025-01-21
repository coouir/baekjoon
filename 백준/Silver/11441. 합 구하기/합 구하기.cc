#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100001];
    int prefix[100001] = {};

    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
        prefix[i] = arr[i] + prefix[i-1];
    }

    int M;
    cin >> M;
    for (int m=0; m<M; m++) {
        int i, j;
        cin >> i >> j;
        cout << prefix[j] - prefix[i-1] << '\n';
    }

    return 0;
}