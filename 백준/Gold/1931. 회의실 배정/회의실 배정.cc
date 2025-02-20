#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int s, e;
        C (int s, int e) {
            this->s = s;
            this->e = e;
        }
        C () {}
};

bool cmp(C a, C b) {
    if (a.e == b.e) return a.s < b.s;
    return a.e < b.e;
}

int main() {
    C c[100010];

    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> c[i].s >> c[i].e;

    sort(c, c+N, cmp);

    int cnt = 1;
    int t = c[0].e;
    for (int i=1; i<N; i++) {
        if (c[i].s >= t) {
            cnt++;
            t = c[i].e;
        }
    }
    cout << cnt;

    return 0;
}