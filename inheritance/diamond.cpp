#include <iostream>
using namespace std;

class A
{
public:
  int a;
};

class B : public A
{
public:
  int b;
};

class C : public A
{
public:
  int c;
};

class D : public B, public C
{
public:
  int d;
};

int main()
{
  D obj;
  /* obj.a=10;    this gives error
                  as D has two copies of a, one from B and one from C
                  a is ambiguos*/
  obj.b = 20;
  obj.c = 30;
  obj.d = 40;
  // one way to enter different values of a in D
  obj.B::a = 10;
  obj.C::a = 9; /* we use scope resolution
     operator for both copies and can give
      them separate values */

  return 0;
}
