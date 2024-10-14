#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void display()
    {
        cout << "Parent class display function." << endl;
    }
    void show()
    {
        cout << "Parent class show function." << endl;
    }
    void print(int a)
    {
        cout << "Print integer: " << a << endl;
    }
    void print(double b)
    {
        cout << "Print double: " << b << endl;
    }
};

class Child : public Parent
{
public:
    void display() override
    {
        cout << "Child class display function." << endl;
    }
    void show()
    {
        cout << "Child class show function." << endl;
    }
};

int main()
{
    Parent *p;
    Child c;
    p = &c;
    p->display();
    p->show();
    p->print(5);
    p->print(3.14);
    return 0;
}