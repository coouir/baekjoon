#include <iostream>
using namespace std;

char arr[1001][1001];
int prefixJ[1001][1001];
int prefixO[1001][1001];
int prefixI[1001][1001];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;
    int k;
    cin >> k;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'J') {
                prefixJ[i][j] = 1 + prefixJ[i-1][j] + prefixJ[i][j-1] - prefixJ[i-1][j-1];
                prefixO[i][j] = 0 + prefixO[i-1][j] + prefixO[i][j-1] - prefixO[i-1][j-1];
                prefixI[i][j] = 0 + prefixI[i-1][j] + prefixI[i][j-1] - prefixI[i-1][j-1];
            } else if (arr[i][j] == 'O') {
                prefixJ[i][j] = 0 + prefixJ[i-1][j] + prefixJ[i][j-1] - prefixJ[i-1][j-1];
                prefixO[i][j] = 1 + prefixO[i-1][j] + prefixO[i][j-1] - prefixO[i-1][j-1];
                prefixI[i][j] = 0 + prefixI[i-1][j] + prefixI[i][j-1] - prefixI[i-1][j-1];
            } else {
                prefixJ[i][j] = 0 + prefixJ[i-1][j] + prefixJ[i][j-1] - prefixJ[i-1][j-1];
                prefixO[i][j] = 0 + prefixO[i-1][j] + prefixO[i][j-1] - prefixO[i-1][j-1];
                prefixI[i][j] = 1 + prefixI[i-1][j] + prefixI[i][j-1] - prefixI[i-1][j-1];
            }
        }
    }
    
    for (int i=0; i<k; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << prefixJ[c][d] - prefixJ[c][b-1] - prefixJ[a-1][d] + prefixJ[a-1][b-1] << ' ';
        cout << prefixO[c][d] - prefixO[c][b-1] - prefixO[a-1][d] + prefixO[a-1][b-1] << ' ';
        cout << prefixI[c][d] - prefixI[c][b-1] - prefixI[a-1][d] + prefixI[a-1][b-1] << '\n';
    }
    
    return 0;
}