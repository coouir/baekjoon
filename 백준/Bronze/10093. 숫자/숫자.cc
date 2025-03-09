#include <iostream>
using namespace std;

int main() {
    unsigned long long A, B;
    cin >> A >> B;

    if (A < B) {
        cout << B-A-1 << '\n'; 
    
        for (unsigned long long i=A+1; i<B; i++) cout << i << ' ';
    } else if (A > B) {
        cout << A-B-1 << '\n'; 
    
        for (unsigned long long i=B+1; i<A; i++) cout << i << ' ';
    } else {
        cout << 0;
    }
    
    return 0;
}