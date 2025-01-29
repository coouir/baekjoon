#include <iostream>
using namespace std;

int arrN[20000010];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;
        arrN[n+10000000]++;
    }

    int M;
    cin >> M;
    for (int i=0; i<M; i++) {
        int n;
        cin >> n;
        cout << arrN[n+10000000] << ' ';
    }
    return 0;
}