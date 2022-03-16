#include <iostream>
using namespace std;

class complex
{
public:
    int x;
    int y;

    void set_data(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void show_data()
    {
        cout << x << " " << y;
    }

    complex add(complex c)
    {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;

        return temp;
    }
};
int main()
{
    system("cls");
    complex c1, c2, c3;
    c1.set_data(2, 3);
    c2.set_data(4, 5);
    c3 = c1.add(c2);

    c3.show_data();
}