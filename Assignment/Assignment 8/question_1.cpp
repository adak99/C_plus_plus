#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;
    float price;

public:
    Car(string b, string m, int y, float p)
    {
        brand = b;
        model = m;
        year = y;
        price = p;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl
             << endl;
    }
};

int main()
{
    Car car1("BMW", "X500", 1999, 290000);
    Car car2("FORD", "M230", 2002, 320000);
    Car car3("TATA", "A502", 1998, 270000);

    cout << "Details of Car 1:" << endl;
    car1.display();

    cout << "Details of Car 2:" << endl;
    car2.display();

    cout << "Details of Car 3:" << endl;
    car3.display();

    return 0;
}
