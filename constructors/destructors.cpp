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
    ~complex()
    {
        cout << " sign off";
    }
};

class complex1
{

public:
    int a, b;
    complex1(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "Hello1 ";
    }
    ~complex1() // tilde symbol
    {
        cout << " sign off1";
    }
};

class complex2
{

public:
    int a, b;
    complex2(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "Hello2 ";
    }
    ~complex2() // tilde symbol
    {
        cout << " sign off2";
    }
};

int main()
{
    complex c1(1, 2);
    complex1 c2(1, 2);
    complex2 c3(1, 2);
}

/*
destructor
-> member function of class
-> can never be static
-> no return type
-> no overloading(takes no arguments)
-> invoked implicitily when object is destroyed
*/