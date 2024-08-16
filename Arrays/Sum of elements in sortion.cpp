#include <iostream>
using namespace std;
void sorting (int a[],int n)
{
    int mini;
    for(int i=0;i<n-1;i++)
    {
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]< a[mini]){
                mini=j; }}
        if(mini !=i){
            swap(a[mini],a[i]);
            }
    }
}
void print(int a[],int n)
{
    for (int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    cout<<endl;
}
void product(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        if(i<n/2){
            sum+=a[i]*a[n-i-1];
            cout<<a[i]<<" "<<a[n-i-1]<<endl;
        }

    }
    cout<<"SUM:"<<sum<<endl;
    }
int main()
{
    int a[]={1,2,9,0,5,6,3,5},sum=0;
    int n=sizeof(a)/sizeof(a[0]);
    if(n%2==0){
    print(a,n);
    sorting(a,n);
    product(a,n);}
    else
    {cout<<"Number of elements should be even"<<endl;}
}
