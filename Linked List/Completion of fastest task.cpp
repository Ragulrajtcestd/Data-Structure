#include<iostream>
using namespace std;
class Node
{
public:
    int id,task;
    string name;
    Node * next;
};
Node * dis(Node * head)
{
    Node * curr=head;
    int i=0,i1;
    string n1;
    if(head!=NULL)
    {
        do
        {
            if(curr->task<curr->next->task)
            {
            i=curr->task;
            i1=curr->id;
            n1=curr->name;
            }
            curr=curr->next;
        }while(curr!=head);
    }
    cout<<"first to complete the task"<<i1;
    cout<<"\n";
}
int main()
{

    Node * head = new Node();
    Node * fir = new Node();
    Node * sec = new Node();

    head->id=001;
    head->name="robo";
    head->task=3;
    head->next=fir;

    fir->id=002;
    fir->name="somu";
    fir->task=4;
    fir->next=sec;

    sec->id=003;
    sec->name="harsh";
    sec->task=2;
    sec->next=head;
    cout<<"ID : "<<head->id<<endl;
    cout<<"Name : "<<head->name<<endl;
    cout<<"Task : "<<head->task<<endl;
    cout<<"\n";

    cout<<"ID : "<<fir->id<<endl;
    cout<<"Name : "<<fir->name<<endl;
    cout<<"Task : "<<fir->task<<endl;
    cout<<"\n";

    cout<<"ID : "<<sec->id<<endl;
    cout<<"Name : "<<sec->name<<endl;
    cout<<"Task : "<<sec->task<<endl;
    cout<<"\n";

    dis(head);
}

