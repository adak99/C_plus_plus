#include <iostream>
using namespace std;

class Television;
class AirCondition;

class Computer
{
protected:
    int basicPrice;

public:
    Computer(int price) : basicPrice(price) {}

    float sellingPriceComputer()
    {
        float flatDis = basicPrice * 0.30;
        float specialDis = (basicPrice - flatDis) * 0.20;
        return (basicPrice - flatDis - specialDis);
    }

    friend float totalSellingPrice(Computer, Television, AirCondition);
};

class Television
{
protected:
    int basicPrice;

public:
    Television(int price) : basicPrice(price) {}

    float sellingPriceTelevision()
    {
        float flatDis = basicPrice * 0.25;
        float specialDis = (basicPrice - flatDis) * 0.10;
        return (basicPrice - flatDis - specialDis);
    }

    friend float totalSellingPrice(Computer, Television, AirCondition);
};

class AirCondition
{
protected:
    int basicPrice;

public:
    AirCondition(int price) : basicPrice(price) {}

    float sellingPriceAircondition()
    {
        float flatDis = basicPrice * 0.25;
        return (basicPrice - flatDis);
    }

    friend float totalSellingPrice(Computer, Television, AirCondition);
};

float totalSellingPrice(Computer c, Television t, AirCondition a)
{
    return c.sellingPriceComputer() + t.sellingPriceTelevision() + a.sellingPriceAircondition();
}

int main()
{
    int computer, telivision, airCondition;

    cout << "Enter price of computer: ";
    cin >> computer;
    cout << "Emter price of telivision: ";
    cin >> telivision;
    cout << "Enter price of Air-Condition: ";
    cin >> airCondition;

    Computer c(computer);
    Television t(telivision);
    AirCondition a(airCondition);

    cout << "Selling price of Computer: " << c.sellingPriceComputer() << endl;
    cout << "Selling price of Telivision: " << t.sellingPriceTelevision() << endl;
    cout << "Selling price of Air-Condition: " << a.sellingPriceAircondition() << endl;
    cout << endl;
    cout << "Total selling price all products: " << totalSellingPrice(c, t, a) << endl;

    return 0;
}

/*
Enter price of computer: 25000
Emter price of telivision: 14000
Enter price of Air-Condition: 34000
Selling price of Computer: 14000
Selling price of Telivision: 9450
Selling price of Air-Condition: 25500

Total selling price all products: 48950
*/