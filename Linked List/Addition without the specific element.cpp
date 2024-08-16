#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *add(Node *head)
{
    Node * temp=head;
    int sum=0;
    if(head!=NULL)
    {
        do
        {
            sum+=temp->data;
            temp=temp->next;
        }while(temp!=head);
    }
    temp=head;
    do
    {
        int c=sum-temp->data;
        temp=temp->next;
        cout<<c<<endl;
    }while(temp!=head);
}
int main()
{
    Node * head = new Node();
    Node * fir = new Node();
    Node * sec = new Node();
    head->data=4;
    head->next=fir;
    head->prev=sec;
    fir->data=5;
    fir->next=sec;
    fir->prev=head;
    sec->data=6;
    sec->next=head;
    sec->prev=fir;
    add(head);
}

