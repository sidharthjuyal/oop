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
};

int main()
{
    system("cls");
    student stud1("Sid", 20, "Singing");
    student stud2("Kid", 20, "Everything");
    student stud3("chad", 20);
    student stud4;

    cout << stud1.sid << " " << stud1.age << " " << stud1.hobby << endl;
    cout << stud2.sid << " " << stud2.age << " " << stud2.hobby << endl;
    cout << stud3.sid << " " << stud3.age << " " << stud3.hobby << endl;
    cout << stud4.sid << " " << stud4.age << " " << stud4.hobby << endl;
}