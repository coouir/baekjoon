#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int P[500000];
int Q[500000];

int n, m;
int c1, c2;

int main() {
    cin >> n >> m;
    cin >> c1 >> c2;
    for (int i=0; i<n; i++) 
        cin >> P[i];
    sort(P, P+n);
    
    for (int i=0; i<m; i++)
        cin >> Q[i];
    sort(Q, Q+m);

    int cnt = 0;
    int min_val = 1<<30;
    int s = 0;
    int e = 0;
    while (s < n && e < m) {
        // 정답
        int d = abs(P[s] - Q[e]);
        if (min_val > d) {
            min_val = d;
            cnt = 1;
        } else if (min_val == d) {
            cnt++;
        }
        
        // 이동
        if (P[s] - Q[e] > 0) {
            e++;
        } else {
            s++;
        }
    }
    cout << abs(c1 - c2) + min_val << ' ' << cnt;
    
    return 0;
}

// 0   3   6
//         s

// -2  2   4   5
//             e