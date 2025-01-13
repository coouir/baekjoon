#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class C {
    public:
        int age, index; string name;
        C (int age, string name, int index) {
            this->age = age;
            this->name = name;
            this->index = index;
        }
        C () {}
};

bool cmp(C a, C b) {
    if (a.age == b.age) return a.index < b.index;
    return a.age < b.age;
}

int main() {
    C c[100000];
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c[i].age >> c[i].name;
        c[i].index = i;
    }
    sort(c, c+N, cmp);
    for (int i=0; i<N; i++) {
        cout << c[i].age << ' ' << c[i].name << endl;
    }
    return 0;
}