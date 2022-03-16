#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
    string z;

public:
    Point(int x1, int y1, string z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    Point(Point &P) // copy constructor
    {
        x = P.x;
        y = P.y;
        z = P.z;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    string getZ()
    {
        return z;
    }
};

int main()
{
    system("cls");
    Point P1(10, 15, "God is great");
    Point P2(P1);  // copy of P1
    Point P3 = P2; // copy of P2

    cout << P1.getX() << " " << P1.getY() << " " << P1.getZ() << endl;
    cout << P2.getX() << " " << P2.getY() << " " << P2.getZ() << endl;
    cout << P3.getX() << " " << P3.getY() << " " << P3.getZ() << endl;
}