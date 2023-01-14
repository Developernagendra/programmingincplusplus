#include<iostream>
#include<conio.h>

using namespace std;
int sum(int a[],int n);

void main(){
    int a[16]={2,2,1,2,2,2,2,2,
    2,2,2,2,2,2,2,2,
    };
    cout<<"enter the number to be searched"<<endl;
    int n;
    cin>>n;
   cout<<sum(a,n);

  
}

int sum(int a,int n){
    int left = 0;
    int right = 17;
    int  mid = left+right/2;
    for(int i=0;i<16;i++){
        if(n==mid){
          return mid;
        }
        else if(n>mid){
            left=mid+1;
            mid = left+right/2;
        }
        else{
            right=mid-1;
            mid = left+right/2;

        }
        return 0;

    }



   return 0;
}