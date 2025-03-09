#include <iostream>
using namespace std;

int arr[21];

int main() {
    for (int i=1; i<=20; i++) {
        arr[i] = i;
    }

    for (int i=0; i<10; i++) {
        int t[21];

        int a, b;
        cin >> a >> b;

        for (int j=a; j<=b; j++) {
            t[j] = arr[b-(j-a)];
        }

        for (int j=a; j<=b; j++) {
            arr[j] = t[j];
        }
    }

    for (int i=1; i<=20; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}