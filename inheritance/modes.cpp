#include <iostream>
using namespace std;

class sid
{
private:
  int x = 11;

public:
  int y = 10;

protected:
  int z = 5;
};

class kid : public sid
{
  /* y public
     z protected
     x inaccesible */
};

class chid : protected sid
{
  /* y protected
    z protected
    x inaccesible */
};

class pid : private sid
{
  /* y private
    z private
    x inaccesible */
};

int main()
{
  kid kid;

  cout << kid.y;
}