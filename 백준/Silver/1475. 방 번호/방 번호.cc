#include <bits/stdc++.h>
using namespace std;

int n, M;
int arr[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while(n > 0) {
        arr[n%10]++;
        n /= 10;
    }
    
    int n69 = arr[6] + arr[9];
    arr[6] = n69 / 2;
    arr[9] = n69 / 2;
    if (n69%2 == 1) {
        arr[9]++;
    }

    for (int i=0; i<10; i++) {
        M = max(M, arr[i]);
    }
    cout << M;

    return 0;
}