#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    Number& operator+=(const Number& other) {
        value += other.value;
        return *this;
    }

    Number& operator-=(const Number& other) {
        value -= other.value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(3);

    num1 += num2;
    std::cout << "After += operator: " << num1.getValue() << std::endl;

    num1 -= num2;
    std::cout << "After -= operator: " << num1.getValue() << std::endl;

    return 0;
}