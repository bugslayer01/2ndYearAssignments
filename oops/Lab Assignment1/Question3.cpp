#include <iostream>

int main() {
    int num1, num2;
    
    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    // Addition
    int sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;
    
    // Subtraction
    int diff = num1 - num2;
    std::cout << "Difference: " << diff << std::endl;
    
    // Multiplication
    int product = num1 * num2;
    std::cout << "Product: " << product << std::endl;
    s
    if (num2 != 0) {
        float quotient = static_cast<float>(num1) / num2;
        std::cout << "Quotient: " << quotient << std::endl;
    } else {
        std::cout << "Cannot divide by zero!" << std::endl;
    }
    
    return 0;
}