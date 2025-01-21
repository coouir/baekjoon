#include <iostream>
using namespace std;

int arr[1000010];
int prefix[1000010];
int suffix[1000010];

int GCD(int a, int b) {
    int r = 1;
    if (a == 0) a = b;
    if (b == 0) b = a;
    while(a%b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i=1; i<=N; i++) {
        cin >> arr[i];
    }

    for (int i=1; i<=N; i++) {
        prefix[i] = GCD(arr[i], prefix[i-1]);
    }

    for (int i=1; i<=N; i++) {
        suffix[N-i+1] = GCD(arr[N-i+1], suffix[N-i+2]);
    }

    int max_gcd = 0, max_val;
    for (int i=1; i<=N; i++) {
        int gcd = GCD(prefix[i-1], suffix[i+1]);
        if (arr[i]%gcd != 0 && max_gcd < gcd) {
            max_gcd = gcd;
            max_val = arr[i];
        }
    }

    if (max_gcd != 0) {
        cout << max_gcd << ' ' << max_val;
    } else {
        cout << -1;
    }

    return 0;
}