#include <iostream>
using namespace std;

int arr[100];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    int v;
    cin >> v;
    for (int i=0; i<N; i++) {
        if (arr[i] == v) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}