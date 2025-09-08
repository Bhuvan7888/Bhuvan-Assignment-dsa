#include <iostream>
using namespace std;

#define SIZE 5   

int stackArr[SIZE];
int top = -1;


bool isEmpty() {
    return (top == -1);
}


bool isFull() {
    return (top == SIZE - 1);
}


void push(int value) {
    if (isFull()) {
        cout << "Stack is FULL!\n";
        return;
    }
    stackArr[++top] = value;
    cout << value << " pushed.\n";
}


void pop() {
    if (isEmpty()) {
        cout << "Stack is EMPTY!\n";
        return;
    }
    cout << stackArr[top--] << " popped.\n";
}


void peek() {
    if (isEmpty())
        cout << "Stack is EMPTY!\n";
    else
        cout << "Top element: " << stackArr[top] << "\n";
}


void display() {
    if (isEmpty()) {
        cout << "Stack is EMPTY!\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int ch, val;
    do {
        cout << "\n1.Push  2.Pop  3.Peek  4.Display  5.Check Empty  6.Check Full  0.Exit\n";
        cin >> ch;
        if (ch == 1) { cin >> val; push(val); }
        else if (ch == 2) pop();
        else if (ch == 3) peek();
        else if (ch == 4) display();
        else if (ch == 5) cout << (isEmpty() ? "Empty\n" : "Not Empty\n");
        else if (ch == 6) cout << (isFull() ? "Full\n" : "Not Full\n");
    } while (ch != 0);
}