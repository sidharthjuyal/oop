#include <iostream>
using namespace std;

class student
{
public:
    string sid;
    int age;
    string hobby;
};

int main()
{
    student stud1;
    student stud2;

    cin >> stud1.sid >> stud1.age >> stud1.hobby;
    cin >> stud2.sid >> stud2.age >> stud2.hobby;

    cout << stud1.sid << " " << stud1.age << " " << stud1.hobby << endl;
    cout << stud2.sid << " " << stud2.age << " " << stud2.hobby << endl;
}