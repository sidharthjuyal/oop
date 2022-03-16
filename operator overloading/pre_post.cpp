#include <iostream>
using namespace std;

class integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << x << endl;
    }
    integer operator++()
    {
        integer temp;
        temp.x = ++x;
        return temp;
    }
    integer operator++(int)
    {
        integer temp;
        temp.x = x++;
        return temp;
    }
};

int main()
{
    integer a, b, c;
    a.setData(3);
    a.showData();

    b = a.operator++();  // or   b=++a;
    c = a.operator++(0); // or   c=a++;
    b.showData();
    c.showData();
    a.showData();
}
