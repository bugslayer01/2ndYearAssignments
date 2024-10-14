#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {

    cout << "Base *b = new Base();" << endl; // 1
    Base *b1 = new Base();
    b1->show();  
    delete b1;   
    cout << endl;

    cout << "Base *b = new Derived();" << endl; // 2
    Base *b2 = new Derived();
    b2->show();  
    delete b2; 
    cout << endl;

    // Derived *d = new Base();
    // cout << "Derived *d = new Base(); (Invalid)" << endl; // 3
    // Derived *d1 = new Base();

    // Case (iv): Derived *d = new Derived();
    cout << "Derived *d = new Derived();" << endl; //4
    Derived *d2 = new Derived();
    d2->show();  
    delete d2;   
    cout << endl;

    return 0;
}
