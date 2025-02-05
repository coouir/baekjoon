#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[30] = {};

    int M;
    cin >> M;

    string str;
    int x;
    for (int i=0; i<M; i++) {
        cin >> str;
        if (str == "add") {
            cin >> x;
            arr[x] = 1;

        } else if (str == "remove") {
            cin >> x;
            arr[x] = 0;

        } else if (str == "check") {
            cin >> x;
            cout << (arr[x] == 1 ? 1 : 0) << '\n';

        } else if (str == "toggle") {
            cin >> x;
            if (arr[x] == 1) arr[x] = 0;
            else arr[x] = 1;

        } else if (str == "all") {
            for (int j=1; j<=20; j++) arr[j] = 1;

        } else if (str == "empty") {
            for (int j=1; j<=20; j++) arr[j] = 0;

        }
    }
    return 0;
}