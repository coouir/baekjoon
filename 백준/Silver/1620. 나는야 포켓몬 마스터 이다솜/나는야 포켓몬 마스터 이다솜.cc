#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<string, int> m;
    string arr[110000], str;

    int N, M;
    cin >> N >> M;
    for (int i=1; i<=N; i++) {
        cin >> arr[i];
        m[arr[i]] = i;
    }

    for (int i=1; i<=M; i++) {
        cin >> str;
        if (atoi(str.c_str()) != 0) 
            cout << arr[atoi(str.c_str())] << '\n';
        else 
            cout << m[str] << '\n';
        
    }
}