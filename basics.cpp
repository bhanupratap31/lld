#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;

    Person() {} // Default constructor
public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void getDetails()
    {
        cout << "The name is: " << name << " and has age: " << age << endl;
    }
};

int main()
{
    Person p1("John Doe", 25);
    p1.getDetails();

    return 0;
}
