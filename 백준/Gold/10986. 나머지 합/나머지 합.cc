#include <iostream>
using namespace std;

long long arr[1000010];
long long prefix[1000010];
long long prefixM[1010];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
        prefix[i] = arr[i] + prefix[i-1];
        prefixM[prefix[i]%M]++;
    }

    long long cnt = 0;
    for (int i=0; i<=1000; i++) {
        cnt += prefixM[i] * (prefixM[i]-1) / 2;
    }
    cout << prefixM[0] + cnt;

    return 0;
}
