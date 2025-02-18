#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        long long p, v;
        C (long long p, long long v) {
            this->p = p;
            this->v = v;
        }
        C () {}
};

bool cmp(C a, C b) {
    return a.p < b.p;
}

C c[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, D;
    cin >> N >> D;
    for (int i=0; i<N; i++) 
        cin >> c[i].p >> c[i].v;
    
    sort(c, c+N, cmp);

    long long max_val = 0;
    long long total = c[0].v;
    int s = 0;
    int e = 0;
    while (e < N) {
        // 정답
        if (c[e].p - c[s].p < D) {
            max_val = max(max_val, total);
        }

        // 이동
        if (c[e].p - c[s].p < D) {
            e++;
            total += c[e].v;
        } else {
            total -= c[s].v;
            s++;
        }
    }
    cout << max_val;

    return 0;
}

// 10  11  12  13
// s
//     e