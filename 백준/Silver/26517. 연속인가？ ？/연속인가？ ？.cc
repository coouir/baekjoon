#include <iostream>
using namespace std;

int main() {
    int k;
    long long a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if (a*k+b == c*k+d) {
        cout << "Yes " << a*k+b;
    } else {
        cout << "No";
    }
    return 0;
}