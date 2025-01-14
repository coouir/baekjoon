#include <iostream>
using namespace std;

int main() {
    int N, arr[1000];
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    int max_val = 0;
    for (int i=0; i<N; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }
    double sum_val = 0;
    for (int i=0; i<N; i++) {
        sum_val += (double)arr[i]/max_val*100;
    }
    cout << sum_val/N;
    return 0;
}