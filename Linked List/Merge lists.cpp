#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};
void insert(Node** head_ref, int data)
{

    Node* new_node = new Node;


    new_node->data = data;

    if (*head_ref == NULL) {
        new_node->next = new_node;
        new_node->prev = new_node;
    }

    else {

        Node* last = (*head_ref)->prev;


        new_node->next = *head_ref;
        new_node->prev = last;

        last->next = (*head_ref)->prev = new_node;
    }


    *head_ref = new_node;
}


Node* merge(Node* first, Node* second)
{

    if (!first)
        return second;


    if (!second)
        return first;


    if (first->data < second->data) {
        first->next = merge(first->next, second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }
    else {
        second->next = merge(first, second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

Node* mergeUtil(Node* head1, Node* head2)
{

    if (!head1)
        return head2;

    if (!head2)
        return head1;

    Node* last_node;
    if (head1->prev->data < head2->prev->data)
        last_node = head2->prev;
    else
        last_node = head1->prev;



    head1->prev->next = head2->prev->next = NULL;


    Node* finalHead = merge(head1, head2);

    finalHead->prev = last_node;
    last_node->next = finalHead;

    return finalHead;
}


void printL(Node* head)
{
    Node* temp = head;

    while (temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
}
int main()
{
    Node *head1 = NULL, *head2 = NULL;

    insert(&head1, 8);
    insert(&head1, 5);
    insert(&head1, 3);

    insert(&head2, 9);
    insert(&head2, 7);
    insert(&head2, 2);

    Node* newHead = mergeUtil(head1, head2);

    cout << "Final Sorted List: ";
    printL(newHead);

    return 0;
}

