#include <iostream>
using namespace std;

int main() {
    int N, arr[10001]={};
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    for (int i=1; i<=10000; i++) {
        for (int j=0; j<arr[i]; j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}