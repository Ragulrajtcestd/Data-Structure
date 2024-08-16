#include<iostream>
using namespace std;
class node
{public:
    node* next;
    int data;
};
void insertatlast(int val,node*& head)
{
    node* newnode=new node();
    newnode->data=val;
    if(head==NULL)
    {
        head=newnode;
        head->next=head;
    }
    node* temp=head;
    while(temp->next!=head){
    temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void insertatfront(int val,node*& head)
{
    node* newnode=new node();
    newnode->data=val;
    if(head==NULL)
    {
        head=newnode;
        head->next=head;
    }
    node* temp=head;
    while(temp->next!=head){
    temp=temp->next;
    }
    newnode->next=head;
    temp->next=newnode;
    head=newnode;
}
void insertatposition(int pos,int val,node*& head)
{
    int count=1;
    if(pos==1){
        insertatfront(val,head);
        return;
    }
    node* newnode=new node();
    newnode->data=val;
    node* temp=head;
    while(count<pos-1 && temp->next!=head ){
        temp=temp->next;
        count++;
    }
    if(temp->next==head && count<pos-1){
        cout<<"Invalid";
        cout<<endl;
        delete newnode;
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deleteatfirst(node*& head)
{
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    node* temp=head;
    node* del=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    delete del;

}
void deleteatlast(node*& head)
{
    if(head==NULL){
        cout<<"Empty";
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    node* temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    node* newone=temp->next;
    delete newone;
    temp->next=head;
}
void disp(node* head)
{
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    int pos;
    node* head=NULL;
    insertatlast(1,head);
    insertatlast(2,head);
    insertatlast(3,head);
    insertatlast(4,head);
    disp(head);
    insertatfront(6,head);
    insertatfront(7,head);
    insertatfront(8,head);
    cout<<"New list:";
    disp(head);ō
    cout<<"Enter a pos:";
    cin>>pos;
    insertatposition(pos,9,head);
    disp(head);
    deleteatfirst(head);
    deleteatlast(head);
    disp(head);
}

