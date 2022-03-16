#include <iostream>
using namespace std;

class kid
{
    int age;
    string name;

public:
    void setValues(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void getValues()
    {
        cout << "Age is: " << age << endl;
        cout << "Name is: " << name << endl;
    }
};

int main()
{
    kid sid;
    sid.setValues(20, "Sidharth Juyal");
    sid.getValues();
}

/*
This pointer
-> cannot ne modified.
-> used to refer the caller object in member function.
-> this is a local object pointer which is present in every instance member function containing the address of the caller object.
*/
