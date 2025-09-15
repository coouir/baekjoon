#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, ans = 100;
int arr[10][10];
int cctv[100][2];
int result[100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool inrange(int x, int y) {
    return ((0 <= x && x < n) && (0 <= y && y < m));
}

void func(int cur) {
    if (cur == cnt) {
        int tot = 0;
        int arr2[10][10];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                arr2[i][j] = arr[i][j];
            }
        }

        for (int i=0; i<cnt; i++) {
            int x = cctv[i][0];
            int y = cctv[i][1];
            int dir = result[i];

            if (arr2[x][y] == 1) {
                while (true) {
                    x += dx[dir];
                    y += dy[dir];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            } else if (arr2[x][y] == 2) {
                while (true) {
                    x += dx[dir];
                    y += dy[dir];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[dir+2];
                    y += dy[dir+2];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            } else if (arr2[x][y] == 3) {
                while (true) {
                    x += dx[dir];
                    y += dy[dir];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+1)%4];
                    y += dy[(dir+1)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            } else if (arr2[x][y] == 4) {
                while (true) {
                    x += dx[dir];
                    y += dy[dir];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+1)%4];
                    y += dy[(dir+1)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+2)%4];
                    y += dy[(dir+2)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            } else {
                while (true) {
                    x += dx[dir];
                    y += dy[dir];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+1)%4];
                    y += dy[(dir+1)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+2)%4];
                    y += dy[(dir+2)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                x = cctv[i][0];
                y = cctv[i][1];
                while (true) {
                    x += dx[(dir+3)%4];
                    y += dy[(dir+3)%4];
                    if (inrange(x, y)) {
                        if (arr2[x][y] == 0) {
                            arr2[x][y] = 9;
                        } else if (arr2[x][y] == 6) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            }

        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (arr2[i][j] == 0) tot++;
            }
        }
        ans =  min(ans, tot);

        return;
    }

    if (arr[cctv[cur][0]][cctv[cur][1]] == 1 || arr[cctv[cur][0]][cctv[cur][1]] == 3 || arr[cctv[cur][0]][cctv[cur][1]] == 4) {
        for (int i=0; i<4; i++) {
            result[cur] = i;
            func(cur+1);
        }
    } else if (arr[cctv[cur][0]][cctv[cur][1]] == 2) {
        for (int i=0; i<2; i++) {
            result[cur] = i;
            func(cur+1);
        }
    } else {
        result[cur] = 0;
        func(cur+1);
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
            if (1 <= arr[i][j] && arr[i][j] <= 5) {
                cctv[cnt][0] = i;
                cctv[cnt][1] = j;
                cnt++;
            }
        }
    }

    func(0);

    cout << ans;
    
    return 0;
}