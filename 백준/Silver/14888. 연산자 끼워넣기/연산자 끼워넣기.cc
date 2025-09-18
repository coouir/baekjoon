#include <bits/stdc++.h>
using namespace std;

int n;
long long M = -10000000000, m = 10000000000;
int numbers[15];
int arr[4];

int result[15];
int vis[4];

void func(int cur) {
    if (cur == n-1) {
        long long num = numbers[0];
        for (int i=0; i<n-1; i++) {
            if (result[i] == 0) {
                num += numbers[i+1];
            } else if (result[i] == 1) {
                num -= numbers[i+1];
            } else if (result[i] == 2) {
                num *= numbers[i+1];
            } else {
                if (num >= 0) {
                    num /= numbers[i+1];
                } else {
                    num = -(abs(num)/numbers[i+1]);
                }
            }
        }
        M = max(M, num);
        m = min(m, num);
    }

    for (int i=0; i<4; i++) {
        if (vis[i] >= arr[i]) continue;
        
        result[cur] = i;
        vis[i]++;
        func(cur+1);
        vis[i]--;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> numbers[i];
    
    for (int i=0; i<4; i++)
        cin >> arr[i];

    func(0);

    cout << M << '\n' << m;

    return 0;
}