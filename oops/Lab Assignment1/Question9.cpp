#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter an arithmetic operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Product: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Quotient: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}