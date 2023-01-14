#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main()
{
void sum(void);
sum();


 int n;
 cout<<"Enter the size of an array  :";
 cin>>n;
 int LA[100];
 float t;
 clock_t begintime, endtime;
 for(int j=1; j<=n; j++)
 {
  cout<<"Enter the sorted elements in your array"<<endl;
  cin>>LA[j];
 }
 int item,beg,end,mid;
 cout<<"\nArray contains following elements  :";
 for(int j=1;j<=n;j++)
 {
  cout<<LA[j]<<" ";
 }
 repeat:
 cout<<"Enter the item u want to search  :";
 cin>>item;
 beg=1;
 end=n;
 mid=(beg+end)/2;
 begintime=clock();
 while((LA[mid]!=item)&&(beg<=end))
 {
  
  if(LA[mid]<item)
  {
   beg=mid+1;
  }
  else
  {
   end=mid-1;
  }
  mid=(beg+end)/2;
 }
 if(beg>end)
 {
  cout<<"Item not found";
 }
 else
 {
  cout<<"Element "<<item<<" found at location no.  :"<<mid;
 }

 endtime=clock();
 t=(endtime-begintime)/CLK_TCK;
 cout<<"\n Time taken for search is  "<<t<<" clock cycles";
 char option;
 cout<<"\nWant to search it again, if yes then press y";
 cin>>option;
 if(option=='y')
 goto repeat;
 


return 0;
}

void sum(){
    int sum =0;
   
    cout<<"enter no upto which u want sum"<<endl;
     int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        sum=sum+i;
    }
    cout<<sum;
}