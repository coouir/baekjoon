#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    for (int t=0; t<T; t++) {
        long long a11, a12, a13, b1;
        long long a21, a22, a23, b2;
        long long a31, a32, a33, b3;
        cin >> a11 >> a12 >> a13 >> b1;
        cin >> a21 >> a22 >> a23 >> b2;
        cin >> a31 >> a32 >> a33 >> b3;

        long long detA = a11*(a22*a33 - a23*a32) - a12*(a21*a33 - a23*a31) + a13*(a21*a32 - a22*a31);
        
        long long det1 = b1*(a22*a33 - a23*a32) - a12*(b2*a33 - a23*b3) + a13*(b2*a32 - a22*b3);
        long long det2 = a11*(b2*a33 - a23*b3) - b1*(a21*a33 - a23*a31) + a13*(a21*b3 - b2*a31);
        long long det3 = a11*(a22*b3 - b2*a32) - a12*(a21*b3 - b2*a31) + b1*(a21*a32 - a22*a31);

        cout << det1 << ' ' << det2 << ' ' << det3 << ' ' << detA << '\n';

        if (detA == 0) {
            cout << "No unique solution\n\n";
        } else {
            double D1 = (double)det1/detA, D2 = (double)det2/detA, D3 = (double)det3/detA;
            if (-0.0005 < D1 && D1 < 0.0005) D1 = 0;
            if (-0.0005 < D2 && D2 < 0.0005) D2 = 0;
            if (-0.0005 < D3 && D3 < 0.0005) D3 = 0;

            cout << fixed;
            cout.precision(3);
            cout << "Unique solution: " << D1 << ' ' << D2 << ' ' << D3 << "\n\n";
        }
    }

    return 0;
}