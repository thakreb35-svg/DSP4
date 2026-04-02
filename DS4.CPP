#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack" << endl;
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
}

// Display stack
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

// Main function
int main() {
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}