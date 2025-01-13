#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, cnt=0;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int n;
        scanf("%d", &n);
        if (n == 1) continue;
        bool check = true;
        for (int j=2; j< (int)sqrt(n) + 1; j++) {
            if (n%j == 0) {
                check = false;
                break;
            }
        }
        if (check) cnt++;
    }
    cout << cnt;
}