#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[500000];
int m[8010];
int sum_val = 0;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        sum_val += arr[i];

        m[arr[i] + 4000]++;
    }

    sort(arr, arr+N);

    int max_idx = 0;
    for (int i=0; i<8010; i++) {
        if (m[max_idx] < m[i]) {
            max_idx = i;
        }
    }
    for (int i=max_idx+1; i<8010; i++) {
        if (m[i] == m[max_idx]) {
            max_idx = i;
            break;
        }
    }

    int mean = round((double)sum_val / N);
	if (mean == -0) {
		mean = 0;
	}

    cout << mean << '\n'; 
    cout << arr[N/2] << '\n';
    cout << max_idx-4000 << '\n';
    cout << arr[N-1]-arr[0] << '\n';

    return 0;
}