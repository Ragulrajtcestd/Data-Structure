#include <iostream>
using namespace std;

class Node {
public:
    string name;
    int age;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(string name, int age) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->age = age;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top Student: " << top->name << " (Age: " << top->age << ")" << endl;
    }

    void printStack() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        cout << "Student Details in the Stack:" << endl;
        while (temp != nullptr) {
            cout << temp->name << " (Age: " << temp->age << ")" << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack studentStack;

    studentStack.push("RAM", 40);
    studentStack.push("Bob", 19);
    studentStack.push("RAJ", 25);

    studentStack.printStack();

    studentStack.pop();
    studentStack.printStack();
    studentStack.peek();

    return 0;
}

