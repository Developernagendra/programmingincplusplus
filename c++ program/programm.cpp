#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int id;
    string course;
    string subject;
    
    void introduce(){
        cout<<"the name of student "<<name<<endl;
        cout<<"the  id of student "<<id<<endl;
        cout<<"the course of student "<<course<<endl;
        cout<<"the subject of student "<<subject<<endl;
    }
    student(string n, int i,string c){
        name =n;
        id=i;
        course= c;   }


};
int main()
{
     student s1 = student("ravi", 1, "cse");
    s1.introduce();
    student s2 = student("shruti", 2, "poltynic");
    s2.introduce();
    student s3 = student("jha", 3, "mtech");
    s3.introduce();
    student s4 = student("ravi", 4, "bio");
    s4.introduce();

}