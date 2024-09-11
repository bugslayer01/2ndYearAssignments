#include <iostream>
using namespace std;
class name2;
class name1
{
private:
    string name;

public:
    void set(string name)
    {
        this->name = name;
    }
    void dis()
    {
        cout << name << endl;
    }
    friend void swap(name1 &n1, name2 &n2); //not working if we do friend void swap(name1, name2)
};

class name2
{
    string name;

public:
    void set(string name)
    {
        this->name = name;
    }
    void dis()
    {
        cout << name << endl;
    }
    friend void swap(name1 &n1, name2 &n2);
};

void swap(name1 &n1, name2 &n2)
{
    string temp = n1.name;
    n1.name = n2.name;
    n2.name = temp;
}

int main()
{
    name1 n1;
    name2 n2;
    n1.set("devansh");
    n2.set("parth");
    swap(n1, n2);
    cout << "name 1=" << endl;
    n1.dis();
    cout << "name 2=" << endl;
    n2.dis();
}