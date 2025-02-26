#include <iostream>
using namespace std;

int main() {
    int G;
    cin >> G;

    int c = 1;
    int p = 1;

    int cnt = 0;
    while (c < G) {
        // 정답
        if (c*c - p*p == G) {
            cout << c << '\n';
            cnt++;
        }

        // 이동
        if (c*c - p*p < G) {
            c++;
        } else {
            p++;
        }
    }
    if (cnt == 0) cout << -1;

    return 0;
}