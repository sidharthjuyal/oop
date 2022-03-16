#include <iostream>
using namespace std;

class student
{
public:
    void show(int a) // function overloading
    {
        cout << "Show with parameter." << endl;
    }
    void show()
    {
        cout << "Show without parameter." << endl;
    }
    student()
    {
        cout << "default constructor." << endl;
    }
    student(int a) // constructor overloading
    {
        cout << "parameterized constructor." << endl;
    }
};

int main()
{
    student s1, s2(4);
    s1.show();
    s2.show(4);
}

/*
POLYMORPHISM
-> poly-many, morph-forms
-> when one thing has many forms it is known as polymorphism.
-> how?
i) function overloading
ii) operator overloading
iii) virtual function
*/
