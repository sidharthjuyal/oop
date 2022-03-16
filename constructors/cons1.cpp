#include <iostream>
using namespace std;

class complex
{

public:
    int a, b;
    complex(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "Hello ";
    }
    complex(const complex &c)
    {
        a = c.a;
        b = c.b;
    }
};

int main()
{
    complex c1(1, 2);
    complex c2(c1);
    cout << c2.a << " " << c2.b;
}

/*
constructor
-> member func of class
-> name of constructor is same as class
-> no return type, cant use return keyword
-> it can never be static
-> automatically invoked when an object is created
-> created to solve problem of initialization

copy constructor

why reference is used?
-> if we pass an argument by value in a copy constructor, a call to copy constructor would be made to call copy constructor which becomes a non-terminating chain of calls.

why const?
so that objects are not accidentally modified;
*/
