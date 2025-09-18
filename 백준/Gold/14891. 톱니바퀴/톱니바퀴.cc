#include <bits/stdc++.h>
using namespace std;

int k, n, d;
string str;

int cogwheel[5][8];

void rotate(int num, int dir) {
    if (dir == 1) {
        int r = cogwheel[num][7];
        for (int i=6; i>=0; i--) 
            cogwheel[num][i+1] = cogwheel[num][i];
        cogwheel[num][0] = r;
    } else {
        int f = cogwheel[num][0];
        for (int i=1; i<=7; i++) 
            cogwheel[num][i-1] = cogwheel[num][i];
        cogwheel[num][7] = f;
    }
}

// void funcR(int num, int dir) {
//     int check = false;

//     if (num != 4 && cogwheel[num][2] != cogwheel[num+1][6]) check = true;
//     rotate(num, dir);
//     if (check) funcR(num+1, -dir);
//     else return;
// }

// void funcL(int num, int dir) {
//     int check = false;

//     if (num != 1 && cogwheel[num][6] != cogwheel[num-1][2]) check = true;
//     rotate(num, dir);
//     if (check) funcR(num-1, -dir);
//     else return;
// }

void func(int num, int dir) {
    // cout << num << ' ' << dir << '\n';

    int checkL = false;
    int checkR = false;
    if (num != 4 && cogwheel[num][2] != cogwheel[num+1][6]) checkR = true;
    if (num != 1 && cogwheel[num][6] != cogwheel[num-1][2]) checkL = true;
    rotate(num, dir);
    // if (num == -1 || num == 5) return;
    // if (num != 4 && cogwheel[num][2] != cogwheel[num+1][6]) {
    //     func(num+1, -dir);
    // } else if (num != 1 && cogwheel[num-1][2] != cogwheel[num][6]) {
    //     func(num-1, -dir);
    // }
    // cout << checkL << ' ' << checkR << '\n';
    if (checkL) func(num-1, -dir);
    if (checkR) func(num+1, -dir);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=1; i<5; i++) {
        cin >> str;
        for (int j=0; j<8; j++) {
            cogwheel[i][j] = str[j] - '0';
        }
    }

    cin >> k;
    while (k--) {
        cin >> n >> d;
        // funcR(n, d);        
        // rotate(n, d);

        // int R = cogwheel[n][2];
        // int L = cogwheel[n][6];
        
        
        rotate(n, d);
        
        int dirL = d;
        int dirR = d;

        for (int i=n+1; i<=4; i++) {
            if (dirR == 1) {
                if (cogwheel[i-1][3] != cogwheel[i][6]) {
                    dirR = -dirR;
                    rotate(i, dirR);
                } else {
                    break;
                }
            } else {
                if (cogwheel[i-1][1] != cogwheel[i][6]) {
                    dirR = -dirR;
                    rotate(i, dirR);
                } else {
                    break;
                }
            }
        }
        for (int i=n-1; i>=1; i--) {
            if (dirL == 1) {
                if (cogwheel[i][2] != cogwheel[i+1][7]) {
                    dirL = -dirL;
                    rotate(i, dirL);
                } else {
                    break;
                }
            } else {
                if (cogwheel[i][2] != cogwheel[i+1][5]) {
                    dirL = -dirL;
                    rotate(i, dirL);
                } else {
                    break;
                }
            }
        }
        // for (int i=1; i<=4; i++) {
        //     for (int j=0; j<8; j++) {
        //         cout << cogwheel[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
    }

    int cnt = 0;
    for (int i=1; i<=4; i++) {
        if (cogwheel[i][0] == 1) {
            cnt += 1<<(i-1);
        }
    }
    cout << cnt;
    
    return 0;
}


// 1   0   1   0   1   1   1   1
//     1   0   1   0   1   1   1   
// 1

// 0   1   0   1   1   1   1   1