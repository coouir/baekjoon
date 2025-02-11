#include <iostream>
#include <queue>
#include <functional>
#include <cstdlib>
using namespace std;

struct CompareAbs {
    bool operator()(int first, int second) {
        if (abs(first) > abs(second)) return true;   
		else if (abs(first) == abs(second)) {
			if (first > second) return true; 
			else return false;
		}
		else return false;
    }
};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<int, vector<int>, CompareAbs> pq;
    
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int x;
        cin >> x;
        if (x != 0) {
            pq.push(x);
        } else {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}