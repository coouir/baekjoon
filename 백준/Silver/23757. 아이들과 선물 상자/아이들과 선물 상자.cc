#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> pq;

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;
        pq.push(n);
    }

    for (int i=0; i<M; i++) {
        int n;
        cin >> n;
        if (pq.top() >= n) {
            pq.push(pq.top() - n);
            pq.pop();
        } else {
            cout << 0;
            return 0;
        }
    }
    cout << 1;

    return 0;
}