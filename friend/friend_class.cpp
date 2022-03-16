#include <iostream>
#include <cmath>
using namespace std;

class EquilateralTriangle
{
    float a;
    float circum;
    float area;

public:
    void setA(float length)
    {
        a = length;
        circum = a + a + a;
        area = (sqrt(3) / 4) * (a * a);
    }

    friend class homework;
};

class homework
{
public:
    void PrintResult(EquilateralTriangle et)
    {
        cout << "Circumference: " << et.circum << endl
             << "Area: " << et.area;
    }
};

int main()
{
    EquilateralTriangle et;
    homework hw;
    et.setA(3);

    hw.PrintResult(et);
}