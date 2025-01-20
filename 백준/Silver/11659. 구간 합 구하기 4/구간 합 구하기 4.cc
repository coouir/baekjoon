#include <iostream>
using namespace std;

int main() {
    int arr[100001];
    int prefix[100001] = {0};

    int N, M;
    scanf("%d %d", &N, &M);
    for (int i=1; i<=N; i++) {
        scanf("%d", &arr[i]);
        prefix[i] = prefix[i-1] + arr[i];
    }

    for (int k=0; k<M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        printf("%d\n", prefix[j] - prefix[i-1]);
    }
    return 0;
}