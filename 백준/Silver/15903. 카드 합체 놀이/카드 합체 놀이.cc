#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    int n, m, x;
    cin >> n >> m;

    for (int i=0; i<n; i++) {
        cin >> x;
        pq.push(x);
    }

    for (int i=0; i<m; i++) {
        long long n1 = pq.top(); pq.pop();
        long long n2 = pq.top(); pq.pop();

        pq.push(n1+n2);
        pq.push(n1+n2);
    }

    long long sum = 0;
    while(!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    cout << sum;

    return 0;
}