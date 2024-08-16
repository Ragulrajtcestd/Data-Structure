#include<iostream>
using namespace std;
class stacks{
public:
    int top=-1;
    int e[100];
    int maxsize;
    stacks (int s){
        maxsize=s;
    }
    void push(int val){

        if(top<maxsize){
            top++;
            e[top]=val;
        }
        else{
            cout<<"overflow";
        }
    }
    void pop(){

        if(top>-1){
            int n=e[top];
            top--;
            cout<<"\nElement popped:"<<n;
                    }
    }
    void disp(){

        if(top>-1){
            cout<<"\nStack"<<endl;
            for(int i=top;i>-1;i--){
                cout<<e[i]<<" ";
            }
        }
        else{
            cout<<"empty";
        }
    }
};
int main(){

    stacks st(5);
    st.push(3);
    st.push(2);
    st.push(1);
    st.disp();
    st.pop();
    st.disp();
}
