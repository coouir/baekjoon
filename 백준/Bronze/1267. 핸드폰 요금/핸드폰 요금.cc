#include <iostream>
using namespace std;

int main() {
    int Y = 0;
    int M = 0;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;
        Y += (n/30 + 1) * 10;
        M += (n/60 + 1) * 15;
    }

    if (Y > M) {
        cout << "M " << M;
    } else if (Y == M) {
        cout << "Y M " << Y;
    } else {
        cout << "Y " << Y;
    }

    return 0;
}