#include <iostream>
using namespace std;

int arr[10];

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int result = A*B*C;
    while(result > 0) {
        arr[result%10]++;
        result /= 10;
    }

    for (int i=0; i<10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}