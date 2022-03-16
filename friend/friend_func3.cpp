#include <iostream>
using namespace std;

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

    friend complex operator+(complex, complex);
};

complex operator+(complex c, complex d)
{
    complex temp;
    temp.a = c.a + d.a;
    temp.b = c.b + d.b;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(2, 3);
    c3 = c1 + c2; // c3=c1.operator+(c2);
    c3.getData();
}

/*
FRIEND FUNCTION 3
-> can be used for operator overloading
-> note that no. of arguments increases as compared to normal operator overloading.
*/