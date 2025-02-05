#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

unordered_set<string> s;
string arr[500000], arr2[500000], str;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> str;
        s.insert(str);
    }

    for (int i=0; i<M; i++) {
        cin >> arr[i];
    }

    int index = 0;
    int cnt = 0;
    for (int i=0; i<M; i++) {
        if (s.find(arr[i]) != s.end()) {
            arr2[index++] = arr[i];
            cnt++;
        }
    }
    cout << cnt << '\n';

    sort(arr2, arr2+index);
    for (int i=0; i<index; i++) {
        cout << arr2[i] << '\n';
    }

    return 0;
}