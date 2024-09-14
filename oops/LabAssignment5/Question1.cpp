#include <iostream>
using namespace std;
class Student;

class Person
{
    int age;
    string Name;

public:
    Person(int a, string n);
    // declaring a friend function
    //  friend void display();
    friend  void display(Person &pobj, Student &sobj);
};
// constructor for person
Person::Person(int a, string n) : age(a), Name(n)
{
    cout << "constructor for Person called" << endl;
}

// inheritance

class Student : public Person
{
    int Rollno;
    // constructor for student
    public:
    Student(int Rollno, int age, string name) : Person(age, name)
    {
        this->Rollno = Rollno;
        cout << "constructor for student called" << endl;
    }
    friend void display(Person &pobj, Student &sobj);
    // friend void display();
};

// friend function
void display(Person &pobj, Student &sobj)
{
    cout << "Name: " << pobj.Name << ", Age: " << pobj.age << ", Roll No: " << sobj.Rollno << endl;
}

int main()
{
    Person one(2, "devansh");
    Student two( 123,3, "dev");
    display(one, two);
}