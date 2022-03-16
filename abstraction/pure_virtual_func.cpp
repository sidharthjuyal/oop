#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class abstractEmployee
{                                       // abstract class
    virtual void AskForPromotion() = 0; // pure virtual function
};

class Employee : abstractEmployee // inherits abstract class
{
    int age;
    string name;

public:
    void AskForPromotion() // declaration of virtual function
    {
        if (age > 18)
            cout << "\n"
                 << name << " got promoted";
        else
            cout << "\nSorry no promotion for you. :(";
    }

    Employee(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    system("cls");
    Employee emp(20, "Sidharth Juyal");
    cout << emp.getAge() << " " << emp.getName();
    emp.AskForPromotion();
}