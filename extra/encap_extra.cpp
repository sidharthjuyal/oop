#include <iostream>
using namespace std;

class car
{
    int modelNumber;
    string company;

public:
    void setValues(int m, string n)
    {
        modelNumber = m;
        company = n;
    }
    void getValues()
    {
        cout << modelNumber << " " << company << endl;
    }
};

int main()
{
    car c;
    c.setValues(123, "lamborghini");
    c.getValues();
}

/*
ENCAPSULATION
-> the act of combining properties and methods, related to the same object, is known as encapsulation.
-> so that object can be equipped with sufficient info. set and set of operations.
*/