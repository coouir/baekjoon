#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define ll long long
const int MAXN = 100005;
ll arr[MAXN];

int main(){
    FASTIO;
    
    ll p, a, b, q, res = 0, sum = 0;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> a >> b;
    
    q = (b - a) / p;
    b -= q * p;
    res += q * sum;
    
    if (a < 0) {
        q = (-a + p - 1)/p;
        a += q*p;
        b += q*p;
    }
    
    for (int i = a; i <= b - 1; i++){
        res += arr[i % p];
    }
    
    cout << res;
    return 0;
}