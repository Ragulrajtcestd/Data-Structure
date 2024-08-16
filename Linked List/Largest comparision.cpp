#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    node*prev;
    int data;
};
node*thala=new node{0};
void middle(node* head)
{
    node*current=head;
    while(current!=NULL){
        if((current->data < current->next->data)){
        node*temp=current->next;
        thala->next=temp;
        thala->data=temp->data;
        thala=thala->next;
        cout<<thala->data<<endl;
        }
        current=current->next;
        }
}
int main()
{

    node* head=new node();
    node* two=new node();
    node* three=new node();
    node* four=new node();
    node* five=new node();

    head->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    head->prev=NULL;
    two->prev=head;
    three->prev=two;
    four->prev=three;
    head->data=5;
    two->data=12;
    three->data=1;
    four->data=3;
    five->data=2;
    node*curr=head;
    cout<<"Original list:";
    while(curr != NULL)
        {
        cout<<curr->data<<" ";
        curr=curr->next;
        }
        cout<<endl;
    middle(head);
    while(thala!= NULL){
            cout<<"hii";
        cout<<thala->data<<" ";
        thala=thala->next;
    }
}

