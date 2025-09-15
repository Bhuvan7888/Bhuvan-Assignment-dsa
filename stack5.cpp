#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(const string& expr) {
    stack<int> s;

    for (char c : expr) {
        if (c >= '0' && c <= '9') {   // check if digit hai ya nhi
            s.push(c - '0');          // convert kro character to integer
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            switch (c) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }

    return s.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (digits only): ";
    cin >> postfix;

    cout << "Result = " << evaluatePostfix(postfix) << endl;
    return 0;
}
