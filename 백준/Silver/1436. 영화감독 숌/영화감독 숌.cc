#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int n = 0;
    int i = 666;
    while (true) {
        if (to_string(i).find("666") != string::npos) {
            n++;
            if (n == N) break;
        }
        i++;
    }
    cout << i;
    return 0;
}