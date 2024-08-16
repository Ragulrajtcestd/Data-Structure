#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
public:
    Node* front=NULL;
    Node* rear=NULL;

    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data=value;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }

    int peek() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.display();
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    cout << "After dequeue, queue: ";
    q.display();

}

