#include <iostream>
using namespace std;

class chef
{
public:
    void makeChicken()
    {
        cout << "\nThis chef makes chicken.";
    }
    void makeMaggi()
    {
        cout << "\nThis chef makes Maggi.";
    }
    void makePasta()
    {
        cout << "\nThis chef makes Pasta.";
    }
};

class indianChef : public chef
{
public:
    void makeMaggi() // function overloading
    {
        cout << "\nThis chef makes cheese Maggi.";
    }

    void makeNaan()
    {
        cout << "\nThis chef makes Naan.";
    }
};

int main()
{

    indianChef chef1;
    chef1.makeChicken();
    chef1.makeNaan();
    chef1.makeMaggi();
}