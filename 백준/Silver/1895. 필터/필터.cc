#include <bits/stdc++.h>
using namespace std;

int r, c, t;
int board[50][50];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> J;
    
    cin >> r >> c;
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> board[i][j];
    cin >> t;
        
    for (int i=0; i<r-2; i++) {
        for (int j=0; j<c-2; j++) {

            vector<int> v;
            for (int k=i; k<i+3; k++) {
                for (int l=j; l<j+3; l++) {
                    v.push_back(board[k][l]);
                }
            }
            sort(v.begin(), v.end());
            J.push_back(v[4]);
        }
    }

    int cnt = 0;
    for (int i=0; i<J.size(); i++) 
        if (J[i] >= t) cnt++;
    
    cout << cnt;

    return 0;
}