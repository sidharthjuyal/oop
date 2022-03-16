#include <iostream>
using namespace std;

class student
{
private:
    int marks; // i dont want anyone to edit this

public:
    string sid;
    int age;
    string hobby;

    student(string a, int b, string c)
    {
        sid = a;
        age = b;
        hobby = c;
    }

    void setMarks(int marks) // setters used to set value to the non local private variable
    {
        if (marks < 0 || marks > 100)
        {
            this->marks = 0; // this pointer used to retrieve the non local private marks variable
        }
        else
            this->marks = marks;
    }

    int getMarks() // getters used to access private member variables
    {
        return marks;
    }
};

int main()
{
    system("cls");
    student stud1("Sid", 20, "Singing");

    // stud1.marks=100;     this will give error, you can only access it using a member function, not even a constructor can access it.

    stud1.setMarks(10000);
    cout << stud1.getMarks();
}