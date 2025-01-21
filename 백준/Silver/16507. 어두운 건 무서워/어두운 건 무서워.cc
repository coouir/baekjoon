#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[1001][1001] = {};
    int prefix[1001][1001] = {};

    int R, C, Q;
    cin >> R >> C >> Q;
    for (int i=1; i<=R; i++) {
        for (int j=1; j<=C; j++) {
            cin >> arr[i][j];
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    for (int q=0; q<Q; q++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << (prefix[r2][c2] - prefix[r2][c1-1] - prefix[r1-1][c2] + prefix[r1-1][c1-1]) / ((r2-r1+1)*(c2-c1+1)) << '\n';
    }

    return 0;
}