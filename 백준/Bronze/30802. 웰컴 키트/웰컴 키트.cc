#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    int S, M, L, XL, XXL, XXXL;
    int T, P;
    cin >> N >> S >> M >> L >> XL >> XXL >> XXXL >> T >> P;

    int cntT = 0;
    cntT += ceil((double)S/T);
    cntT += ceil((double)M/T);
    cntT += ceil((double)L/T);
    cntT += ceil((double)XL/T);
    cntT += ceil((double)XXL/T);
    cntT += ceil((double)XXXL/T);
    cout << cntT << endl;
    cout << N/P << ' ' << N%P;
    return 0;
}