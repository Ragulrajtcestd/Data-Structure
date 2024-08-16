#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node * next;
};
Node * dis(Node * head)
{
    Node * prev=NULL,*Next=NULL,*curr=head;
    int c,c1;
    while(curr!=NULL)
    {
        c=curr->data;
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
        cout<<c<<" ";
    }
    head=prev;
    cout<<"\n";
    while(prev!=NULL)
    {
        c1=prev->data;
        prev=prev->next;
        cout<<c1<<" ";
    }
    if(c==c1)
    {
        cout<<"\nPalindrome";
    }
    else
    {
        cout<<"\nNot a Palindrome";
    }
}
int main()
{
    Node * head = new Node();
    Node * fir = new Node();
    Node * sec = new Node();
    Node * thi = new Node();

    head->data=1;
    head->next=fir;
    fir->data=2;
    fir->next=sec;
    sec->data=3;
    sec->next=thi;
    thi->data=4;
    thi->next=NULL;
    dis(head);
}
