#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    for (int i=M; i<=N; i++) {
        if (i == 1) continue;
        int check = true;
        for (int j=2; j<(int)sqrt(i) + 1; j++) {
            if (i%j == 0) {
                check = false;
                break;
            }
        }
        if (check) cout << i << endl;
    }
    return 0;
}