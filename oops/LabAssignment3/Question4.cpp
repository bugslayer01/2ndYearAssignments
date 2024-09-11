#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int dataA;

public:
    void setDataA(int val)
    {
        dataA = val;
    }
    friend class ClassB;
};
class ClassB
{
public:
    void showData(ClassA &a)
    {
        cout << "Value of dataA from ClassA: " << a.dataA << endl;
    }
    void modifyData(ClassA &a, int newVal)
    {
        a.dataA = newVal;
    }
};
int main()
{
    ClassA objA;
    ClassB objB;
    objA.setDataA(10);
    objB.showData(objA);
    objB.modifyData(objA, 25);
    objB.showData(objA);
    return 0;
}
