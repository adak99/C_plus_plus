#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Bird
{
public:
    void fly()
    {
        cout << "Flying..." << endl;
    }
};

class Parrot : public Animal, public Bird
{
public:
    void speak()
    {
        cout << "Parrot speaking..." << endl;
    }
};

int main()
{
    Parrot parrot;

    parrot.eat();
    parrot.fly();
    parrot.speak();

    return 0;
}
