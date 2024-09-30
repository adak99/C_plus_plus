#include<iostream>
using namespace std;

class SwapNumbers {
    private:
        int a, b;
    public:
        SwapNumbers(int x, int y) : a(x), b(y) {}

        friend void swap(SwapNumbers &num);

        void display() {
            cout << "Value of a: " << a << ", Value of b: " << b << endl;
        }
};

void swap(SwapNumbers &num) {
    num.a = num.a + num.b;
    num.b = num.a - num.b;
    num.a = num.a - num.b;
}

int main() {
    SwapNumbers obj(100, 200);
    cout << "Before swapping:" << endl;
    obj.display();

    swap(obj);

    cout << "After swapping:" << endl;
    obj.display();

    return 0;
}
