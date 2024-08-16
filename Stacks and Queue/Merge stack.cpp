#include<iostream>
using namespace std;

class stacks
{
  public:
  int e[50];
  int top=-1;
  int maxi;
  stacks(int siz){
    maxi=siz;
  }
  void push(int value)
  {
      if(top<maxi-1){
        top++;
        e[top]=value;
      }
      else{
        cout<<"Overflow";
      }
  }
  void pop()
  {
      if(top>-1){
        cout<<"\n popped element:"<<e[top];
        top--;

      }
      else{
        cout<<"\n Underflow";
      }
  }
  void disp()
  {
      if(top == -1){
            cout<<"Empty"<<endl;
            return;
        }
       for (int i = top; i >= 0; i--) {
            cout << e[i] << " ";
        }
        cout<<endl;
    }
  void mergest(stacks &st1) {
        while (st1.top != -1) {
            push(st1.e[st1.top]);
            st1.pop();
        }
    }
};
int main()
{
    stacks st1(10);
    stacks st2(10);
    st1.push(3);
    st1.push(2);
    st1.push(1);
    cout<<"\n Stack1:";
    st1.disp();
    st2.push(4);
    st2.push(5);
    st2.push(6);
    cout<<"\n Stack2:";
    st2.disp();
    st2.mergest(st1);
    cout<<"\n Merge Stack:";
    st2.disp();

}


