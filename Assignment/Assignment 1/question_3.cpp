#include <iostream>
#include <string>
using namespace std;

class vehicle
{
protected:
    int model_number;
    int price;
    int seat_capacity;

public:
    string vehicle_type;

public:
    void set_model_number(int mod_num);
    void set_price(int amt);
    void set_seat_capacity(int capa);
    void set_vehicle_type(string type);
    void display();
};

void vehicle::set_model_number(int mod_num)
{
    model_number = mod_num;
}

void vehicle::set_price(int amt)
{
    price = amt;
}

void vehicle::set_seat_capacity(int capa)
{
    seat_capacity = capa;
}

void vehicle::set_vehicle_type(string type)
{
    vehicle_type = type;
}

void vehicle::display()
{
    cout << "Model number: " << model_number << endl;
    cout << "Price: " << price << endl;
    cout << "Seat capacity: " << seat_capacity << endl;
    cout << "Vehicle type: " << vehicle_type << endl;
}

int main()
{
    vehicle bus;
    vehicle car;

    cout << "Bus details: " << endl;
    bus.set_model_number(123);
    bus.set_price(234000000);
    bus.set_seat_capacity(50);
    bus.set_vehicle_type("Public");
    bus.display();

    cout << "\nCar details: " << endl;
    car.set_model_number(346);
    car.set_price(2340000);
    car.set_seat_capacity(5);
    car.set_vehicle_type("Private");
    car.display();

    return 0;
}
