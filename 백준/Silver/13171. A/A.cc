#include <iostream>
using namespace std;

long long A, X;
long long c = 1000000007;

long long F(long long x) {
    if (x == 1) return A%c;
    
    long long k = F(x/2);
    if (x%2 == 0) {
        return (k%c * k%c)%c;
    } else {
        return (k%c * k%c * (A%c)) %c;
    }
}

int main() {
    cin >> A >> X;

    cout << F(X);
    return 0;
}