#include <iostream>
using namespace std;

class student
{
    int age;
    string name;

public:
    void setAge(int a)
    {
        age = a;
    }
    void setName(string n)
    {
        name = n;
    }
    void getAge()
    {
        cout << "The age is: " << age << endl;
    }
    void getName()
    {
        cout << "The name is: " << name << endl;
    }
};

int main()
{
    student sid;
    sid.setAge(20);
    sid.setName("Sidharth");
    sid.getAge();
    sid.getName();
}

/*
-> OOP is a guideline for the programmers to program in an efficient way.
-> leads to less error in code
-> eases maintainence.
-> a real life entity = object.
-> class = blue print of an object.

PRINCIPLES OF OOPS
-> encapsulation
-> data hiding
-> abstraction
-> polymorphism
-> inheritance
*/