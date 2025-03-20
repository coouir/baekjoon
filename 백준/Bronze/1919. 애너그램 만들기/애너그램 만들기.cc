#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int arr1[26];
int arr2[26];

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    for (int i=0; i<(int)str1.size(); i++) {
        arr1[str1[i]-97]++;
    }
    for (int i=0; i<(int)str2.size(); i++) {
        arr2[str2[i]-97]++;
    }

    int cnt = 0;
    for (int i=0; i<26; i++) {
        cnt += abs(arr1[i] - arr2[i]);
    }
    cout << cnt;
    
    return 0;
}