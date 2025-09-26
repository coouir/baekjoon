#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int a[10];
int b[10];
int R[10][10];
int M[10][10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i=0; i<n; i++)
        cin >> a[i];
    
    for (int i=0; i<k; i++) {
        for (int j=0; j<n; j++) {
            cin >> R[i][j];
        }
    }

    for (int i=0; i<k; i++) {
        for (int j=0; j<n; j++) {
            cin >> M[i][j];
        }
    }

    int num = 1;
    for (int i=0; i<k*2; i++) num *= n;

    for (int i=0; i<num; i++) {
        for (int i=0; i<n; i++) b[i] = a[i];

        int tmp = i;
        int cnt = 0;

        bool check = true;
        for (int j=0; j<k; j++) {
            if (b[tmp%n] == 0) {
                check = false; 
                break;
            }
            cnt += R[j][tmp%n];
            b[tmp%n]--;
            tmp /= n;
        }
        if (!check) continue;

        for (int j=0; j<k; j++) {
            if (b[tmp%n] == 0) {
                check = false; 
                break;
            }
            cnt += M[j][tmp%n];
            b[tmp%n]--;
            tmp /= n;
        }
        if (!check) continue;

        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}