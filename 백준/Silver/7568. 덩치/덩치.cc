#include <iostream>
using namespace std;

int main() {
    int N, arr[50][2];
    cin >> N;
    for (int i=0; i<N; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for (int i=0; i<N; i++) {
        int r = 1;
        for (int j=0; j<N; j++) {
            if (i == j) continue;
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) r++;
        }
        cout << r << ' ';
    }
    return 0;
}