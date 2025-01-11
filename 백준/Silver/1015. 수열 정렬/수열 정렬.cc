#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int n, m;
        C (int n, int m) {
            this->n = n;
            this->m = m;
        }
        C () {}
};

bool cmp(C a, C b) {
    if (a.n == b.n) return a.m < b.m;
    return a.n <= b.n;
}
int main() {
    C c[50];
    int N; 
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c[i].n;
        c[i].m = i;
    }
    sort(c, c+N, cmp);
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (c[j].m == i) {
                cout << j << ' ';
                break;
            }
        }
    }
    return 0;
}