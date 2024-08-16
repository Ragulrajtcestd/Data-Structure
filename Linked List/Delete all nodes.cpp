#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};

void del(Node* head, int n) {
    Node* curr= head;
    Node* temp;

    while(curr->next != curr) {
        for (int i=1;i<n-1;i++) {
            curr= curr->next;
        }

        temp=curr->next;
        curr->next = temp->next;
        cout<<"Deleted Node:"<<temp->data<<endl;
        delete temp;
        while(curr->next!=head){
            cout<<curr->data<<" "<<"\n";
            curr=curr->next;
        }
        curr= curr->next;
    }

    cout<<"Deleted Node:"<<curr->data<<endl;
    delete curr;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;
    int n = 2;

    del(head, n);

    return 0;
}

