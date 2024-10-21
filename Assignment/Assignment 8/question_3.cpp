#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
private:
    float area;
    float perimeter;
    float volume;

public:
    Shape(float radius)
    {
        area = M_PI * radius * radius; // Area of circle = πr²
        perimeter = 2 * M_PI * radius; // Perimeter of circle = 2πr
    }

    // Constructor for Rectangle (overloaded)
    Shape(float length, float breadth)
    {
        area = length * breadth; // Area of rectangle = l * b
    }

    // Constructor for Cube (overloaded)
    Shape(float length, float breadth, float height)
    {
        volume = length * breadth * height; // Volume of cube = l * b * h
    }

    // Function to display Circle details
    void displayCircle()
    {
        cout << "Area of the circle is: " << (int)area << endl;
        cout << "Perimeter of the circle is: " << (int)perimeter << endl;
    }

    // Function to display Rectangle details
    void displayRectangle()
    {
        cout << "The area of rectangle is: " << (int)area << endl;
    }

    // Function to display Cube volume
    void displayCube()
    {
        cout << "The volume of cube is: " << (int)volume << endl;
    }
};

int main()
{
    // Test case: Circle with radius = 7
    Shape circle(7);
    circle.displayCircle();

    // Test case: Rectangle with length = 8, breadth = 5
    Shape rectangle(8, 5);
    rectangle.displayRectangle();

    // Test case: Cube with length = 9, breadth = 4, height = 8
    Shape cube(9, 4, 8);
    cube.displayCube();

    return 0;
}
