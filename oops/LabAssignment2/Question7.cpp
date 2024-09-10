//Create a code to implement the namespace and use similar variables 
// and functions defined in different code sections.
#include<iostream>

// First namespace: mathOperations1
namespace mathOperations1 {
    int value = 10;  // A variable with the same name as in the second namespace

    int add(int a, int b) {  // Function with the same name as in the second namespace
        return a + b;
    }

    void display() {
        std::cout << "Namespace mathOperations1, value: " << value << std::endl;
    }
}

// Second namespace: mathOperations2
namespace mathOperations2 {
    int value = 20;  // Another variable with the same name as in the first namespace

    int add(int a, int b) {  // Another function with the same name as in the first namespace
        return a * b;
    }

    void display() {
        std::cout << "Namespace mathOperations2, value: " << value << std::endl;
    }
}

int main() {
    // Using functions and variables from the first namespace
    std::cout << "Using mathOperations1 namespace:\n";
    mathOperations1::display();
    std::cout << "Addition result: " << mathOperations1::add(5, 3) << std::endl;

    // Using functions and variables from the second namespace
    std::cout << "\nUsing mathOperations2 namespace:\n";
    mathOperations2::display();
    std::cout << "Multiplication result: " << mathOperations2::add(5, 3) << std::endl;

    return 0;
}
// Using mathOperations1 namespace:
// Namespace mathOperations1, value: 10
// Addition result: 8

// Using mathOperations2 namespace:
// Namespace mathOperations2, value: 20
// Multiplication result: 15
