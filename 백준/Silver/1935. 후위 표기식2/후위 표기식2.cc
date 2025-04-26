#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<double> stack;
    int N;
    double val1 = 0, val2 = 0;
    std::string text;
    std::cin >> N;
    std::cin >> text;

    double arr[26] = {};
    for (int i=0; i<N; i++) std::cin >> arr[i];

    for (char ch : text) {
        if ('A' <= ch && ch <= 'Z') {
            stack.push(arr[ch-65]);
        } else {
            val2 = stack.top(); stack.pop();
            val1 = stack.top(); stack.pop();

            switch(ch) {
                case '+': stack.push(val1+val2); break;
                case '-': stack.push(val1-val2); break;
                case '*': stack.push(val1*val2); break;
                default : stack.push(val1/val2); break;
            }
        }
    }

    printf("%.2lf", stack.top());

    return 0;
}