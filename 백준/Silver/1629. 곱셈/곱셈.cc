#include <iostream>
using namespace std;

long long A, B, C;

long long F(long long B) {
    if (B == 0) return 1;
    if (B == 1) return A%C;

    long long p = F(B / 2) % C;
    if (B%2 == 0) {
        return (p*p)%C;
    } else {
        return ((p*p)%C * (A%C))%C;
    }
}

int main() {
    cin >> A >> B >> C;

    cout << F(B);

    return 0;
}