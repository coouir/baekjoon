#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        string str, str_0, str_1, str_1_c;
        cin >> str;

        int size = (int)str.size();

        // Palindrome
        for (int i=0; i<size; i++) 
            str_0 += str[size-1-i];
        
        if (str == str_0) {
            cout << 0 << '\n';
            continue;
        }
        
        // Pseudo Palindrome
        int s = 0;
        int e = size - 1;
        while (s < e) {
            // 정답
            if (str[s] != str[e]) {
                break;
            }
            // 이동
            if (str[s] == str[e]) {
                s++;
                e--;
            }
        }

        for (int i=s+1; i<=e; i++) {
            str_1 += str[i];
        }
        size = (int)str_1.size();
        for (int i=0; i<size; i++) 
            str_1_c += str_1[size-1-i];
        
        if (str_1 == str_1_c) {
            cout << 1 << '\n';
            continue;
        }
        str_1 = "";
        str_1_c = "";
        for (int i=s; i<=e-1; i++) {
            str_1 += str[i];
        }
        size = (int)str_1.size();
        for (int i=0; i<size; i++) 
            str_1_c += str_1[size-1-i];
        
        if (str_1 == str_1_c) {
            cout << 1 << '\n';
            continue;
        }

        cout << 2 << '\n';
    }
    
    return 0;
}