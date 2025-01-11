#include <iostream>
using namespace std;

int main() {
    int N, sum_val = 0;
    cin >> N;
    for (int i=0; i<N; i++) {
        int n;
        scanf("%1d", &n);
        sum_val += n;
    }
    cout << sum_val;
}