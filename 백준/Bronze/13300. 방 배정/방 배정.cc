#include <iostream>
using namespace std;

int arr1[7];
int arr0[7];

int main() {
    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        int S, Y;
        cin >> S >> Y;
        if (S == 1) {
            arr1[Y]++;
        } else {
            arr0[Y]++;
        }
    }

    int cnt = 0;
    for (int i=1; i<7; i++) {
        while (arr1[i] > 0) {
            cnt++;
            arr1[i] -= K;
        }
        while (arr0[i] > 0) {
            cnt++;
            arr0[i] -= K;
        }
    }
    cout << cnt;

    return 0;
}
