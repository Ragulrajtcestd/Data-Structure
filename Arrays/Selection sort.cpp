#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    int grade;
};
void arrange(student a[],int n,int mini){
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j].grade < a[mini].grade){
                mini=j;
            }
        }
        if(mini !=i){
            swap(a[mini],a[i]);
        }
    }

}
int main(){
    student stu[]={{"ragul",2},{"sangu",1},{"raju",3},{"rashith",5}};
    int n=sizeof(stu)/sizeof(stu[0]),mini;
    cout<<"unsorted one \n";
    for(int i=0;i<n;i++){
        cout<<stu[i].name<<":"<<stu[i].grade<<"\t";
    }
    cout<<endl;
    arrange(stu,n,mini);
    cout<<"sorted one \n";
     for(int i=0;i<n;i++){
        cout<<stu[i].name<<":"<<stu[i].grade<<"\t";
    }
    return 0;

    }



