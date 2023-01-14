#include<iostream>
using namespace std;
class student{
    public:
      int marks =97;

};
class shruti : public student{
    public:
      int marksdetected =5;
};
int main(){
    shruti s1;
    cout<<"the mark is obtain by shruti is "<< s1.marks<<endl;
    cout<<"the mark is detected by shruti is "<< s1.marksdetected<<endl;

}