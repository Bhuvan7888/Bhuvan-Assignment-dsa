#include <iostream>
#include <string>
using namespace std;

#define SIZE 100   

char st[SIZE];
int top = -1;


void push(char ch) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow!\n";
        return;
    }
    st[++top] = ch;
}


char pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return '\0';
    }
    return st[top--];
}

int main() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;

   
    for (char c : str) {
        push(c);
    }

    
    while (top != -1) {
        reversed += pop();
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}