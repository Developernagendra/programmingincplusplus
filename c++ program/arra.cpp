#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main()
{
int a[20];
void sum(int a[20]);
sum(a);

return 0;
}

void sum(int a[20]){
    int sum =0,k;
  int count=1;  
   
    cout<<"enter the number of elemnets"<<endl;
     int n;
    cin>>n;
    cout<<"enter elemnts"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    cout<<"enter the number upto which you want sum"<<endl;
    cin>>k;
    for(int i=0;i<k;i++){
        count++;
        sum=sum+a[i];
        count++;
    }
    count++;
    count++;
    cout<<"count "<<count<<endl;
    cout<<"sum "<<sum;
}