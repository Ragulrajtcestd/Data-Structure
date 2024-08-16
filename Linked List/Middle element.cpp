#include<iostream>
using namespace std;
class node{
    public:
    node* next;
   node*prev;
    int data;
};
void middle(node* head,int n)
{
    int c=0;
    node*current=head;
    while(current!=NULL){
        n++;
        current=current->next;
    }

    while(head!=NULL)
        {
        c++;
        if(c==n/2 && n%2==1)
            {cout<<"middle:"<<head->next->data<<endl;}
        if(c==n/2 && n%2==0)
        {cout<<head->data<<" and "<<head->next->data<<endl;}
        head=head->next;
        }
    }
int main()
{
    int n;
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
    head->data=9;
    two->data=21;
    three->data=1;
    four->data=3;
    five->data=7;
    middle(head,n);
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
