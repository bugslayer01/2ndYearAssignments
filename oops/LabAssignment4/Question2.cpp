// Redefine the above program by creating an array of objects of the class Rectangle and calculate area for each object calling different constructors.
// Also implement constructors with default arguments and destructor in this program.// Create a class named 'Rectangle' with two data members -
#include <iostream>
using namespace std;
class Rectangle
{
    double l, b;

public:
    double area()
    {
        return l * b;
    }
    Rectangle()
    {
        l = 1;
        b = 3;
    }
    Rectangle(double l, double b = 5)
    {
        this->l = l;
        this->b = b;
    }
    void dis()
    {
        cout << "area is " << area() << endl;
    }
    ~Rectangle()
    {
        cout << "dis caalled" << endl;
    }
};
int main()
{
    Rectangle r[3] = {Rectangle(4), Rectangle(5), Rectangle(3, 3)};

    r[0].dis();
    r[1].dis();
    r[2].dis();
    r[3].dis();
}