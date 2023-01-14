#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int id;
    string course;

    void introduce()
    {
        cout << "the name of student is" << name << endl;
        cout << "the id of student is" << id << endl;
        cout << "the course of student is" << course << endl;
    }
    student(string n, int i, string c)
    {
        name = n;
        id = i;
        course = c;
    }
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

    // s1.name = "ravi";
    // s1.id=1;
    // s1.course="cse";
    // s1.introduce();
    // student s2;
    // s2.name = "shruti ";
    // s2.id=1;
    // s2.course="poltynic";
    // s2.introduce();
    // student s3;
    //  s3.name = "jha";
    //  s3.id=1;
    // s3.course="mtech";
    // s3.introduce();
    // student s4;
    //  s4.name = "ravi";
    // s4.id=1;
    // s4.course="bio";
    // s4.introduce();
}
