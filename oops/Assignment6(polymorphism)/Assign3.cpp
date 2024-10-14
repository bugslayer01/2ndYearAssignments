#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class show function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {

    std::cout << "Base *b = new Base();" << std::endl; // 1
    Base *b1 = new Base();
    b1->show();  
    delete b1;   
    std::cout << std::endl;

    std::cout << "Base *b = new Derived();" << std::endl; // 2
    Base *b2 = new Derived();
    b2->show();  
    delete b2; 
    std::cout << std::endl;

    // Derived *d = new Base();
    // std::cout << "Derived *d = new Base(); (Invalid)" << std::endl; // 3
    // Derived *d1 = new Base();

    // Case (iv): Derived *d = new Derived();
    std::cout << "Derived *d = new Derived();" << std::endl; //4
    Derived *d2 = new Derived();
    d2->show();  
    delete d2;   
    std::cout << std::endl;

    return 0;
}
