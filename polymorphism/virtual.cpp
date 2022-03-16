#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    string company;
    int age;

public:
    virtual void fun() = 0; // this is a pure virtual function
                            // a pure virtual function makes a class an abstract class

    void setName(string name)
    {
        this->name = name;
    }
    void setCompany(string company)
    {
        this->company = company;
    }
    void setAge(int age)
    {
        this->age = age;
    }

    string getName()
    {
        return name;
    }
    string getCompany()
    {
        return company;
    }
    int getAge()
    {
        return age;
    }

    void introduction()
    {
        cout << "Hello! Iam " << name << " from " << company << " and Iam " << age << " years old.\n";
    }

    Employee(string name, string company, int age)
    {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    virtual void work() // this is just a virtual function
    {
        cout << "Employee works.\n";
    }
};

class developer : public Employee
{
public:
    string language;

    developer(string name, string company, int age, string language) : Employee(name, company, age)
    {
        this->language = language;
    }

    void devIntroduction()
    {
        cout << "Hello! Iam " << name << " from " << company << ", Iam " << age << " years old and I love " << language << endl; // protected accessible
    }

    void work()
    {
        cout << "Employee codes.\n";
    }

    void fun()
    {
        cout << "Have fun developer.\n";
    }
};

class teacher : public Employee
{
public:
    string language;

    teacher(string name, string company, int age, string language) : Employee(name, company, age)
    {
        this->language = language;
    }

    void tecIntroduction()
    {
        cout << "Hello! Iam " << name << " from " << company << ", Iam " << age << " years old and I teach " << language << endl; // protected accessible
    }

    void work()
    {
        cout << "Employee teaches.\n";
    }

    void fun()
    {
        cout << "Have fun teacher.\n";
    }
};

int main()
{
    developer dev("Sidharth", "Google", 20, "C++");
    teacher tec("Saldina", "udemy", 25, "C++");

    dev.devIntroduction();
    tec.tecIntroduction();

    Employee *emp1 = &dev;
    Employee *emp2 = &tec;
    Employee *emp3 = new developer("Mohit", "Ramesh pvt. ltd.", 20, "Java");
    Employee *emp4 = new teacher("Rohit", "Kamlesh pvt. ltd.", 20, "Python");

    emp2->work();
    emp2->introduction();
    emp3->fun();
    emp4->fun();
    cout << emp4->getName();
    tec.work(); // see tec doesnt have a work(), still this works...why?
}
