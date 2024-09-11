#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int dataA;

public:
    ClassA(int value) : dataA(value) {}

    friend ClassA operator+(const ClassA &obj1, const ClassB &obj2);
};

class ClassB
{
private:
    int dataB;

public:
    ClassB(int value) : dataB(value) {}

    friend ClassA operator+(const ClassA &obj1, const ClassB &obj2);
};

ClassA operator+(const ClassA &obj1, const ClassB &obj2)
{
    return ClassA(obj1.dataA + obj2.dataB);
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    ClassA result = objA + objB;
    cout << "Result: " << result.dataA << endl;

    return 0;
}

/////////////DOUBT IN 3RD QUESTION////////////



#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int valueA;

public:
    void setData(int val)
    {
        valueA = val;
    }

    friend int addValues(ClassA a, ClassB b);
};

class ClassB
{
private:
    int valueB;

public:
    void setData(int val)
    {
        valueB = val;
    }

    friend int addValues(ClassA a, ClassB b);
};

int addValues(ClassA a, ClassB b)
{
    return a.valueA + b.valueB;
}

int main()
{
    ClassA objA;
    ClassB objB;
    objA.setData(10);
    objB.setData(20);
    int result = addValues(objA, objB);
    cout << "The sum of values from ClassA and ClassB is: " << result << endl;
    return 0;
}
