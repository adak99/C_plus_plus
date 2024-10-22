#include <iostream>
using namespace std;

class pqr;
class xyz;

class abc
{
private:
    int data;

public:
    abc(int data)
    {
        this->data = data;
    }

    friend void max(abc, pqr, xyz);
};

class pqr
{
private:
    int data;

public:
    pqr(int data)
    {
        this->data = data;
    }

    friend void max(abc, pqr, xyz);
};

class xyz
{
private:
    int data;

public:
    xyz(int data)
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
    abc a(20);
    pqr b(10);
    xyz c(50);
    max(a, b, c);

    return 0;
}