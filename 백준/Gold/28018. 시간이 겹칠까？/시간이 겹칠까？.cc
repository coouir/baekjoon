#include <iostream>
using namespace std;

int arr[1000010] = {};
int prefix[1000010] = {};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int S, E;
        cin >> S >> E;
        arr[S]++;
        arr[E+1]--;
    }

    for (int i=1; i<=1000010; i++) {
        prefix[i] = arr[i] + prefix[i-1];
    }

    int Q;
    cin >> Q;
    for (int i=0; i<Q; i++) {
        int q;
        cin >> q;
        cout << prefix[q] << '\n';
    }

    return 0;
}