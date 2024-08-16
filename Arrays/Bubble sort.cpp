#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class employee{
public:
    string name;
    int salary;
};
void arrange(employee a[],int n){

    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i].salary>a[j].salary){
                    employee temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }
    }

}
int main(){
    employee emp[]={{"ragul",10000},{"ram",9000},{"raju",15000},{"rashith",8000}};
    int n=sizeof(emp)/sizeof(emp[0]);
    cout<<"unsorted one \n";
    for(int i=0;i<n;i++){
        cout<<emp[i].name<<":"<<emp[i].salary<<"\t";
    }
    cout<<endl;
    arrange(emp,n);
    cout<<"sorted one \n";
    for (int i=0;i<n;i++){
        cout<<emp[i].name<<":"<<emp[i].salary<<"\t";
    }

    return 0;

    }o


