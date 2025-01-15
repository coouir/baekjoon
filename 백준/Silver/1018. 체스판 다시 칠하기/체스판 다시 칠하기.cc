#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    char arr[50][50];
    int N, M;
    scanf("%d %d%*c", &N, &M);
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%c", &arr[i][j]);
        }
        while(getchar() != '\n');
    }
    int min_val = 64;
    for (int i=0; i<=N-8; i++) {
        for (int j=0; j<=M-8; j++) {
            char c = arr[i][j];
            int cnt1 = 0, cnt2 = 0;
            for (int k=0; k<8; k++) {
                for (int l=0; l<8; l++) {
                    if (k%2 == 0) {
                        if (l%2 == 0) {
                            if (c != arr[i+k][j+l]) cnt1++;
                            else cnt2++;
                        } else {
                            if (c == arr[i+k][j+l]) cnt1++;
                            else cnt2++;
                        }
                    } else {
                        if (l%2 == 0) {
                            if (c == arr[i+k][j+l]) cnt1++;
                            else cnt2++;
                        } else {
                            if (c != arr[i+k][j+l]) cnt1++;
                            else cnt2++;
                        }
                    }
                }
            }
            min_val = min(min_val, min(cnt1, cnt2));
        }
    }
    printf("%d", min_val);
    return 0;
}