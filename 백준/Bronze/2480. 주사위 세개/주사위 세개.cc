#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 같은 눈이 3개
    if (a == b && b == c) {
        cout << 10000 + a*1000;
    } else if (a == b) {
        cout << 1000 + a*100;
    } else if (b == c) {
        cout << 1000 + b*100;
    } else if (a == c) {
        cout << 1000 + a*100;
    } else {
        if (a > b && a > c) {
            cout << a*100;
        } else if (b > a && b > c) {
            cout << b*100;
        } else {
            cout << c*100;
        }
    }
    
    return 0;
}