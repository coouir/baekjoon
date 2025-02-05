#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<string, string> m;
    string str1, str2;

    int N, M;
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> str1 >> str2;
        m[str1] = str2;
    }

    for (int i=0; i<M; i++) {
        cin >> str1;
        cout << m[str1] << '\n';
    }
    
    return 0;
}