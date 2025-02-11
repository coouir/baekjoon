#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<int> pq;
    
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        if (x != 0) {
            for (int j=0; j<x; j++) {
                int n;
                cin >> n;
                pq.push(n);
            }
        } else {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}