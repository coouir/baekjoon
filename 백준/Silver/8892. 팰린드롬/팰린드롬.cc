#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        string arr[100];

        int K;
        cin >> K;
        for (int k=0; k<K; k++) 
            cin >> arr[k];
        
        for (int i=0; i<K; i++) {
            for (int j=0; j<K; j++) {
                if (i == j) continue;
                bool check = true;
                
                string str = arr[i]+arr[j];
                for (int l=0; l<str.length(); l++) {
                    if (str[l] != str[str.length()-l-1]) {
                        check = false;
                        break;
                    }
                }
                if (check) {
                    cout << str << endl;
                    goto True;
                }
            }
        }
        cout << 0 << endl;
        True: continue;
    }
    return 0;
}