#include <iostream>
using namespace std;

class greeting
{
public:
  greeting()
  {
    cout << "Greeting" << endl;
  }
  ~greeting()
  {
    cout << "anti Greeting" << endl;
  }
};

class hello : public greeting
{
public:
  hello()
  {
    cout << "Hello" << endl;
  }
  ~hello()
  {
    cout << "Byee" << endl;
  }
};

int main()
{
  hello obj;
}