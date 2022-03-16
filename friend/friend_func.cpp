#include <iostream>
using namespace std;

class complex
{
    int a = 10, b = 10;

public:
    friend void show(complex);

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
};

void show(complex c)
{
    cout << c.a << " " << c.b;
}

int main()
{
    complex c;
    show(c);
}

/*
FRIEND FUNCTION
-> not a member function of class
-> defined outside of class
-> can access any member of the class to which it is friend.
-> has no caller object just like normal functions.
-> cannot access members of class directly
-> defined with memebership operator.
*/