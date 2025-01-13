#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[3][9];
    for (int i=0; i<3; i++) {
        scanf("%s", arr[i]);
    }
    for (int i=0; i<3; i++) {
        bool check = true;
        for (int j=0; j<strlen(arr[i]); j++) {
            if (!('0' <= arr[i][j] && arr[i][j] <= '9')) {
                check = false; 
                break;
            }
        }
        if (check) {
            int n = atoi(arr[i]) + 3 - i;
            if (n%15 == 0) cout << "FizzBuzz";
            else if (n%3 == 0) cout << "Fizz";
            else if (n%5 == 0) cout << "Buzz";
            else cout << n;
            break;
        }
    }
    return 0;
}