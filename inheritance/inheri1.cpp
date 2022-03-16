#include <iostream>
using namespace std;

class Car
{
public:
    int price;
    int capacity;
    Car(int x, int y)
    {
        price = x;
        capacity = y;
    }
};

class sportsCar : public Car
{
public:
    string engine;
    string color;

    sportsCar(int price, int capacity, string e, string c) : Car(price, capacity)
    {
        engine = e;
        color = c;
    }
    void display()
    {
        cout << "Price: " << price << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Engine: " << engine << endl;
        cout << "Color: " << color << endl;
    }
};

int main()
{
    sportsCar s1(1200000, 12, "RTX138", "black");
    s1.display();

    return 0;
}

/*
INHERITANCE
->
it is a process of inheriting properties and behaviours of existing class into a new class.
*/
