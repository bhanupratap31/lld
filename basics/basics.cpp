#include <iostream>
#include <string>
using namespace std;

class GFG
{
public:
    void call_print()
    {
        print();
    }

    virtual void print()
    {
        cout << "Hello from the base class" << '\n';
    }
};

class ChotaGFG : public GFG
{
public:
    void print() override
    {
        cout << "Hello from the derived class" << '\n';
    }
};

int main()
{
    GFG *geeks = new GFG();
    ChotaGFG *geeks2 = new ChotaGFG();

    geeks->call_print();
    geeks2->call_print();

    delete geeks;
    delete geeks2;

    return 0;
}
