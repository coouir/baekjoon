#include <bits/stdc++.h>
using namespace std;

string A, B;
int arr[1010][1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;

    for (int i=1; i<=A.length(); i++) {
        for (int j=1; j<=B.length(); j++) {
            if (A[i-1] == B[j-1]) {
                arr[i][j] = arr[i-1][j-1] + 1;
            } else {
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }
    cout << arr[A.length()][B.length()];

    return 0;
}