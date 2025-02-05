#include <iostream>
using namespace std;

int arr[21000000];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> n;
        arr[n+10000000]++;
    }

    int M, m;
    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> m;
        cout << arr[m+10000000] << ' ';
    }
    
    return 0;
}