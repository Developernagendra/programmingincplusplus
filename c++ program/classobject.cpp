//class and object
#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    string name ;
    int id ;
    string course ;


    void introduce(){
        cout<<"the name of an student is" << name << endl; 
        cout<<"the id  of an student is" << id  << endl;
        cout<<"the course  of an student is" << course<< endl;
        
    }
    
};

int main(){
    student s1;
    s1.name = "ravi";
    s1.id = 1;
    s1.course ="cse";
    s1.introduce();
}
