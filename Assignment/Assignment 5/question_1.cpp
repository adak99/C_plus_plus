#include<iostream>
using namespace std;

class magic;

class fun {
    private:
        float data;
    public:
        fun(float val) {
			this->data = val;
		}
        
        friend void compare(fun &f, magic &m);
};

class magic {
    private:
        float data;
    public:
        magic(float val){
			this->data = val;
		}
        
        friend void compare(fun &f, magic &m);
};

void compare(fun &f, magic &m) {
    if(f.data > m.data) {
        cout << "Data member of fun is greater" << endl;
    } else if(f.data < m.data) {
        cout << "Data member of magic is greater" << endl;
    } else {
        cout << "Data members are equal" << endl;
    }
}

int main() {
    fun f(10.25);
    magic m(11.10);
    compare(f, m);
    return 0;
}
