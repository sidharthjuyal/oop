#include <iostream>
using namespace std;

class student
{
public:
    string sid;
    int age;
    string hobby;

    student()
    {
        sid = "No_name";
        age = 0;
        hobby = "No_hobby";
    }

    student(string a, int b, string c)
    {
        sid = a;
        age = b;
        hobby = c;
    }
    student(string a, int b)
    {
        sid = a;
        age = b;
        hobby = "This kid has no hobby";
    }

    // method

    void isTeenager()
    {
        if (age < 19)
        {
            cout << endl
                 << sid << " is a teen.";
        }
        else
        {
            cout << "\n"
                 << sid << " is not a teen";
        }
    }
};

int main()
{
    system("cls");
    student stud1("Sid", 18, "Singing");
    student stud3("chad", 20);
    student stud4;

    stud1.isTeenager();
    stud3.isTeenager();
}