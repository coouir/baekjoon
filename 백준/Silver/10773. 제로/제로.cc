#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    int K;
    cin >> K;
    for (int i=0; i<K; i++) {
        int n;
        cin >> n;
        if (n != 0) {
            s.push(n);
        } else {
            s.pop();
        }
    }

    int sum_val = 0;
    while(!s.empty()) {
        sum_val += s.top();
        s.pop();
    }
    cout << sum_val;
    
    return 0;
}