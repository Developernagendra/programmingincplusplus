#include <iostream>
using namespace std;
class student
{

public:
    int marks1;

    void marks()
    {
        cout<< "the marks of score is " << marks1 << endl;
    }
};
int main()
{
    student s1;

    s1.marks1 = 97;
    s1.marks();
}