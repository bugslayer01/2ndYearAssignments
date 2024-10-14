//Verify that an abstract class can have constructors.

#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual void display() = 0;
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;    
    }
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

//Discuss the pros-cons of polymorphism of C++ 

//Pros:
// 1. Polymorphism allows for the same function to be used for different data types.
// 2. Polymorphism allows for the same function to be used for different classes.
// 3. Polymorphism allows for the same function to be used for different objects.
// 4. Polymorphism allows for the same function to be used for different arguments.

//Cons:
// 1. Polymorphism can be difficult to understand and implement.
// 2. Polymorphism can be difficult to debug.
// 3. Polymorphism can be difficult to maintain.
// 4. Polymorphism can be difficult to test.
// 5. Polymorphism can be difficult to document.
// 6. Polymorphism can be difficult to optimize.
// 7. Polymorphism can be difficult to scale.
// 8. Polymorphism can be difficult to secure.
// 9. Polymorphism can be difficult to extend.
// 10. Polymorphism can be difficult to integrate.
// 11. Polymorphism can be difficult to deploy.
// 12. Polymorphism can be difficult to monitor.