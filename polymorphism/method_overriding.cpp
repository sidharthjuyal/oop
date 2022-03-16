#include <iostream>
using namespace std;

class A
{
public:
   void f1() { cout << "A f1 hello" << endl; };
   void f2() { cout << "A f2 hello" << endl; };
};

class B : public A
{
public:
   void f1() { cout << "B f1 hello" << endl; };
   // method overriding
   void f2(int i) { cout << "B f2 hello" << endl; };
   // method hiding
};

int main()
{
   B obj;
   obj.f1(); // B ka f1 chlega
   obj.f2(4);
   obj.A::f1();
}

/* function Hiding

above case me vaise to agar ham obj.f2() likhte to parent class vala f2 execute hojata as B inherits A but here we have done method hiding which doesnt allow this,

method hiding

in this case, the derived class creates it's own method that has the same name as the method in base class but also have different signature.
*/

/*
Virtual func
A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

LATE BINDING
 In this, the compiler adds code that identifies the type of object at runtime then matches the function call with the correct function definition
*/