#include <iostream>
#include <algorithm>
using namespace std;

int arr[2000000];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    for (int i=N; i<N+M; i++) 
        cin >> arr[i];

    sort(arr, arr+N+M);

    for (int i=0; i<N+M; i++) 
        cout << arr[i] << ' ';
    
    return 0;
}