#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr1[110][110];
int arr2[110][110];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            cin >> arr1[i][j];

    for (int i=0; i<n; i++) 
        for (int j=0; j<m; j++) 
            cin >> arr2[i][j];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << arr1[i][j] + arr2[i][j] << ' ';
        }
        cout << '\n';
    }
        
    return 0;
}