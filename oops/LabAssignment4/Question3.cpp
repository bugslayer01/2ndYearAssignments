#include<iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called!" << endl;
    }

    // Destructor (rule i: Name should begin with tilde sign (~) and must match class name)
    ~Test() {
        cout << "Destructor called!" << endl;
    }

    // Uncommenting the following lines will cause compilation errors, demonstrating rules ii and iii:
    // ~Test(int x); // Error: rule iii (Destructors do not allow parameters)
    // ~Test() {};   // Error: rule ii (There cannot be more than one destructor in a class)
};

int main() {
    Test obj;  
    return 0;
}
