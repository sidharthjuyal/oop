#include <iostream>
#include <cmath>
using namespace std;

class EquilateralTriangle
{
    float a;
    float circum;
    float area;

    friend void PrintResult(EquilateralTriangle et); /*can be private
                                     or public*/
public:
    void setA(float length)
    {
        a = length;
        circum = a + a + a;
        area = (sqrt(3) / 4) * (a * a);
    }
};

void PrintResult(EquilateralTriangle et)
{
    cout << "Circumference: " << et.circum << endl
         << "Area: " << et.area;
}

int main()
{
    EquilateralTriangle et;
    et.setA(3);

    PrintResult(et);
}