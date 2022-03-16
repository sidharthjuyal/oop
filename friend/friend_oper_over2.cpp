#include <iostream>
using namespace std;

// unary operator overloading
class complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void getData()
    {
        cout << a << " " << b;
    }

    friend complex operator-(complex);
};

complex operator-(complex c)
{
    complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}

int main()
{
    complex c1, c2;
    c1.setData(1, 2);
    c2 = -c1;
    c2.getData();
}

/*
FRIEND FUNCTION 3
-> member function of one class can become friend to another class.
*/