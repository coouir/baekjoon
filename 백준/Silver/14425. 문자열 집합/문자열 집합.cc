#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<string> s;
    string str;

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> str;
        s.insert(str);
    }

    int cnt = 0;
    for (int i=0; i<M; i++) {
        cin >> str;
        if (s.find(str) != s.end()) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}