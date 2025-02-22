#include <iostream>
#include <algorithm>
using namespace std;

int arr[510][510];
int DP[510][510];

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cin >> arr[i][j];
        }
    }

    DP[0][0] = arr[0][0];
    for (int i=1; i<n; i++) {
        DP[i][0] = DP[i-1][0] + arr[i][0];  
        DP[i][i] = DP[i-1][i-1] + arr[i][i];
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            if (j == 0 || j == i) continue;
            DP[i][j] = max(DP[i-1][j], DP[i-1][j-1]) + arr[i][j];
        }
    }

    int max_val = 0;
    for (int j=0; j<n; j++) 
        max_val = max(max_val, DP[n-1][j]);
    
    cout << max_val;
    
    return 0;
}