/*#include<iostream>
using namespace std ;
class student{
    public:
    void marks(int a){
        cout<<"the marks obtain by student is"<<a<<endl;

    }
    void marks(double b){
        cout<<"the marks obtain by student is"<<b<<endl;

    }
    void marks(){
        cout<<"none";
    }
};
int main(){
    student s1;
    s1.marks(94);
    s1.marks(90.2);
    s1.marks();

};*/
#include<iostream>
using namespace std ;
class student{
    public:
    void intro(){
        cout<<"the result obtain by student is intro"<<endl;

    }
    void display(){
        cout<<"the result obtain by student is display"<<endl;

    }
    void marks(){
        cout<<"none";
    }
};
class tonny : public student{
    void intro(){
          cout<<"the result obtain by tonny is  intro"<<endl;

    }
    void display(){
          cout<<"the result obtain by tonny is display"<<endl;
    }
};
int main(){
    student *st;
    tonny t;
    st= &t;
    st->intro();
    st->display();

   

};