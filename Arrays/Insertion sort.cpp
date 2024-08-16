#include <iostream>
using namespace std;
int main(){
    int a[10]={4,1,2,5,3,10,6,8,7,9},temp,j;
    cout<<"insertion sort"<<endl;
    cout<<"unsorted one"<<endl;
    for(int i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(int i=1;i<10;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    cout<<"sorted one \n";
    for(int i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
}
