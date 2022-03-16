#include <iostream>
using namespace std;
// friend function can be used to access variables of two class at the same time which no other can do
class jomplex; // declared classs jomplex beforehand in order to make class complex familier, that there is a jomplex class (o_o)

// binary operator overloading
class complex
{
    int a = 10;

public:
    friend void show(complex, jomplex);
};

class jomplex
{
    int a = 11;

public:
    friend void show(complex, jomplex);
};

void show(complex c, jomplex d)
{
    cout << c.a << " " << d.a;
    cout << "\nTheir sum is: " << c.a + d.a;
}

int main()
{
    complex c;
    jomplex d;
    show(c, d);
}

/*
FRIEND FUNCTION 2
-> one friend function can be friend to more than one class.
-> can be declared in public or private it doesnt matter as it is not a member function of class
*/