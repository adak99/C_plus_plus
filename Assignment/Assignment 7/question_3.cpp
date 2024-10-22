#include <iostream>
using namespace std;

class pqr;
class xyz;

class abc
{
private:
    float data;

public:
    abc(float data)
    {
        this->data = data;
    }

    friend void max(abc, pqr, xyz);
};

class pqr
{
private:
    float data;

public:
    pqr(float data)
    {
        this->data = data;
    }

    friend void max(abc, pqr, xyz);
};

class xyz
{
private:
    float data;

public:
    xyz(float data)
    {
        this->data = data;
    }

    friend void max(abc, pqr, xyz);
};

void max(abc a, pqr b, xyz c)
{
    if (a.data > b.data && a.data > c.data)
        cout << "Data memner of abc is greater." << endl;

    else if (b.data > a.data && b.data > c.data)
        cout << "Data member of pqr is greater." << endl;

    else
        cout << "Data memnber of xyz is greater." << endl;
}

int main()
{
    abc a(20.90);
    pqr b(10.99);
    xyz c(50.00);
    max(a, b, c);

    return 0;
}