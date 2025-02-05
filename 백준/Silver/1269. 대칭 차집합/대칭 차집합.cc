#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<int> A, B;

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        int n;
        cin >> n;
        A.insert(n);
    }

    for (int i=0; i<M; i++) {
        int n;
        cin >> n;
        B.insert(n);
    }

    int cnt = 0;
    for (int value : A) {
        if (B.find(value) == B.end()) cnt++;
    }
    for (int value : B) {
        if (A.find(value) == A.end()) cnt++;
    }
    cout << cnt; 

    return 0;
}