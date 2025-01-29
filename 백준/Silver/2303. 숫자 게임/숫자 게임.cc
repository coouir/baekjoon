#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int max_n = 0, max_val = 0;
    for (int n=1; n<=N; n++) {
        int arr[5];
        for (int i=0; i<5; i++)
            cin >> arr[i];
        
        int max_val_n = 0;
        for (int i=0; i<5; i++) {
            for (int j=i+1; j<5; j++) {
                for (int k=j+1; k<5; k++) {
                    max_val_n = max(max_val_n, (arr[i] + arr[j] + arr[k]) % 10);
                }
            }
        }
        if (max_val <= max_val_n) {
            max_n = n;
            max_val = max_val_n;
        }
    }
    cout << max_n;

    return 0;
}