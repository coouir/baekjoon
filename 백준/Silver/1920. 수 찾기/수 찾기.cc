#include <bits/stdc++.h>
using namespace std;

int N, arrN[100000], M;

bool binary_search(int target) {
    int low = 0, high = N-1;
    while (low <= high) {
        int mid = (low+high)/2;
        if (target == arrN[mid]) return true;
        if (target < arrN[mid]) {
            high = mid-1;
        } else if (target > arrN[mid]) {
            low = mid+1;
        }
    }
    return false;
}

int main() {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &arrN[i]);
    }
    sort(arrN, arrN+N);
    scanf("%d", &M);
    for (int i=0; i<M; i++) {
        int n;
        scanf("%d", &n);
        printf("%d\n", binary_search(n));
    }
    
    return 0;
}