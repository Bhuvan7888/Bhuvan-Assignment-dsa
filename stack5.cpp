#include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;


int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
    }
    return 0;
}


int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');   
        }
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            int result = applyOp(a, b, c);
            s.push(result);
        }
    }

    return s.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (use digits only): ";
    cin >> postfix;

    cout << "Result = " << evaluatePostfix(postfix) << endl;
    return 0;
}