#include <iostream>
#include <stack>
#include <string>

// 연산자 우선순위 함수 정의
int precedence(char oper);

int main() {
    std::stack<char> stack;
    std::string text;
    char op = '\0';

    std::cin >> text; // 공백 없이 입력

    for (char ch : text) {
        if (ch == '(') {
            stack.push(ch);
        }
        else if (ch == ')') {
            while (!stack.empty()) {
                op = stack.top();
                stack.pop();
                if (op == '(') break;
                std::cout << op;
            }
        }
        else if (ch >= 'A' && ch <= 'Z') // 한 자리 수만 가정하고 있음
            std::cout << ch;
        else {
            while(!stack.empty()) {
                op = stack.top();
                if (precedence(ch) > precedence(op)) break;
                std::cout << op;
                stack.pop();
            }
            stack.push(ch);
        }
    }

    while(!stack.empty()) {
        std::cout << stack.top();
        stack.pop();
    }

    return 0;
}

int precedence(char oper) {
    switch(oper) {
        case '(' : case ')' : return 0;
        case '+' : case '-' : return 1;
        default : return 2;
    }
    return -1;
}