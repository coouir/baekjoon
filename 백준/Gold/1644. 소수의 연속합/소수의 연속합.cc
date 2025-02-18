#include <iostream>
using namespace std;

int a[4000010], arr[4000010];

int main() {
    int N;
    cin >> N;
    for(int i=2; i<=N; i++) {
        a[i] = i;
    }

    for(int i=2; i<=N; i++) {
        if(a[i] == 0) continue;

        for(int j=2*i; j<=N; j+=i) {
            a[j] = 0;
        }
    }

    int size = 0;
    for(int i=2; i<=N; i++) {
        if(a[i]!=0) {
            arr[size++] = a[i];
        }
    }

    int cnt= 0;

    int s = 0;
    int e = 0;
    int sum_val = arr[0];
    while (e < size) {
        // 정답
        if (sum_val == N) {
            cnt++;
        }

        // 이동
        if (sum_val <= N) {
            e++;
            sum_val += arr[e];
        } else {
            sum_val -= arr[s];
            s++;
        }
    }
    // for (int i=0; i<size; i++) {
    //     cout << arr[i] << ' ';
    // }
    cout << cnt;

    return 0;
}

// 2   3   5   7   11  13  17  18  23  29  31  37  41
// s
//                         e