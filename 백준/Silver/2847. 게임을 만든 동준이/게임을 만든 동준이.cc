#include <bits/stdc++.h>
using namespace std;

int n;
int arr[110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];

    int cnt = 0;
    for (int i=n-2; i>=0; i--) {
        if (arr[i] < arr[i+1]) continue;
        cnt += arr[i]-arr[i+1]+1;
        arr[i] -=  arr[i]-arr[i+1]+1;
    }
    cout << cnt;

    return 0;
}