#include <iostream>
using std::cout;
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    Employee(string Name, string Company, int Age)
    {
        this->Name = Name;
        this->Company = Company;
        this->Age = Age;
    }

    void Introduction()
    {
        cout << "\nHello!\nMy name is " << Name;
        cout << "\nMy company is " << Company;
        cout << "\nMy age is " << Age;
    }
};

int main()
{
    system("cls");

    Employee employee1("Sidharth Juyal", "Winter Nights", 20);
    Employee employee2("Jiyyarth Sudal", "Summer Days", 20);

    employee1.Introduction();
    employee2.Introduction();
}