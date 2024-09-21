#include <iostream>
using namespace std;

class Person
{
protected:
    string memberName;

public:
    Person(string n) : memberName(n) {}
    virtual string getRole() = 0; // Pure virtual function
};

class Emp : virtual public Person
{
protected:
    double salary;

public:
    // Constructor initializes Person and salary
    Emp(string n, double s) : Person(n), salary(s) {}
    string getRole() override
    {
        return "Employee";
    }
};

class stu : virtual public Person
{
protected:
    double grade;

public:
    // Constructor initializes Person and grade
    stu(string n, double g) : Person(n), grade(g) {}
    string getRole() override
    {
        return "Student"; // Corrected typo from "stuydent" to "Student"
    }
};

class Ta : public stu, public Emp
{
public:
    // Constructor initializes Person, stu, and Emp
    Ta(string n, double g, double s) : Person(n), stu(n, g), Emp(n, s) {}

    string getRole() override
    {
        return "Teaching Assistant";
    }
};

int main()
{
    Ta ta("John Doe", 90.5, 50000); // Example values for name, grade, and salary
    return 0;
}
