#include <iostream>
using namespace std;

int main() {
    int C;
    cin >> C;
    for (int c=1; c<=C; c++) {
        long long arr[50010] = {};
        long long prefix[50010] = {};
        long long prefixD[1000010] = {};

        int d, n;
        cin >> d >> n;
        for (int i=1; i<=n; i++) {
            cin >> arr[i];
            prefix[i] = arr[i] + prefix[i-1];
            prefixD[prefix[i]%d]++;
        }

        long long cnt = 0;
        for (int i=0; i<d; i++) {
            cnt += prefixD[i] * (prefixD[i]-1) / 2;
        }
        cout << prefixD[0] + cnt << '\n'; 
    }

    return 0;
}