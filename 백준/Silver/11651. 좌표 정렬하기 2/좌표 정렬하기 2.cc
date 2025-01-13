#include <iostream>
#include <algorithm>
using namespace std;

class C {
    public:
        int x, y;
        C (int x, int y) {
            this->x = x;
            this->y = y;
        } 
        C () {}
};

bool cmp(C a, C b) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}

int main() {
    C c[100000];
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d %d", &c[i].x, &c[i].y);
    }
    sort(c, c+N, cmp);
    for (int i=0; i<N; i++) {
        printf("%d %d\n", c[i].x, c[i].y);
    }
    return 0;
}