#include <iostream>
using namespace std;

int main() {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char answer[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int x, y;
    scanf("%d %d", &x, &y);

    for (int i=1; i<x; i++) {
        y += days[i];
    }
    printf("%s", answer[y%7]);
    return 0;
}