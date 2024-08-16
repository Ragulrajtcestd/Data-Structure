o#include <iostream>
using namespace std;

class Stack {
public:
    char data;
    Stack* next;
    Stack* top = NULL;

    void push(char data) {
        Stack* temp = new Stack();
        temp->data = data;
        temp->next = top;
        top = temp;
    }

    char pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return '\0';
        }
        Stack* temp = top;
        char poppedData = top->data;
        top = top->next;
        delete temp;
        return poppedData;
    }

    char peek() {
        if (top != NULL) {
            return top->data;
        }
        return '\0';
    }

    bool isEmpty() {
        return top == NULL;
    }
};

bool isBalanced(string str) {
    Stack s;
    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        if (ch == '{' || ch == '(' || ch == '[') {
            s.push(ch);
        } else if (ch == '}' || ch == ')' || ch == ']') {
            if (s.isEmpty()) {
                return false;
            }
            char top = s.pop();
            if ((ch == '}' && top != '{') ||
                (ch == ')' && top != '(') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.isEmpty();
}

int main() {
    string str;
    cout<<"Enter expression:";
    cin>>str;

    cout <<(isBalanced(str) ? "Balanced" : "Unbalanced") << endl;

    return 0;
}
