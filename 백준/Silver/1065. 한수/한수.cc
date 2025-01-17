#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        if (i < 100) cnt++;
        else if (i/100 - (i%100)/10 == (i%100)/10 - (i%100)%10) cnt++;
    }
    printf("%d", cnt);
    return 0;
}