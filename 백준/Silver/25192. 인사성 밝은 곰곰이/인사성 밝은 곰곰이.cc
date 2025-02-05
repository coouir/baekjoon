#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;

    unordered_set<string> us;
    string str;

    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> str;
        if (str == "ENTER") {
            cnt += us.size();
            us.clear();
        } else {
            us.insert(str);
        }

        if (i == N-1) {
            cnt += us.size();
        }
    }
    cout << cnt;

    return 0;
}