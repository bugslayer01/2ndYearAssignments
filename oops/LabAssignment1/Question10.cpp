#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Using if-else
    if (number % 2 == 0)
    {
        std::cout << "The number is even." << std::endl;
    }
    else
    {
        std::cout << "The number is odd." << std::endl;
    }

    // Using conditional operator
    std::cout << "The number is " << (number % 2 == 0 ? "even" : "odd") << std::endl;

    return 0;
}