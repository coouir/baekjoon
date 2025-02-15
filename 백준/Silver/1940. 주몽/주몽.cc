#include <iostream>
#include <algorithm>
using namespace std;

int arr[15000];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    sort(arr, arr+N);

    int cnt = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (arr[i] + arr[j] == M) cnt++;
        }
    }
    cout << cnt;

    return 0;
}
