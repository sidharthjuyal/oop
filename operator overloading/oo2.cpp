#include <iostream>
using namespace std;

class complex
{
private:
   int a, b;

public:
   void setData(int x, int y)
   {
      a = x;
      b = y;
   }
   void showData()
   {
      cout << a << " " << b;
   }

   complex operator-() /* notice that it has no
                           arguments because the operator we are
                           overloading is a unary operator */
   {
      complex temp;
      temp.a = -a;
      temp.b = -b;
      return (temp);
   }
};

int main()
{
   complex c1, c2;
   c1.setData(3, 4);
   //    c2=-c1;
   c2 = c1.operator-(); // this is also same

   c2.showData();
}
