#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual void display() = 0;
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {

    Base *b = new Derived();
    b->show();
    b->display();
    delete b;

    return 0;
}