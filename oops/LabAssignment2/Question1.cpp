#include <iostream>
using namespace std;

class Student {
public:
    // Defining a struct inside the class to hold contact details
    struct ContactDetails {
        string phoneNumber;
        string address;
    };

    // Data members of the class
    string Name;
    int RollNo;
    string Degree;
    float CurrentCGPA;
    ContactDetails contact;  // Struct as a data member inside the class

    // Member function to add student details
    void addDetails(string name, int rollNo, string degree, float cgpa, string phone, string addr) {
        Name = name;
        RollNo = rollNo;
        Degree = degree;
        CurrentCGPA = cgpa;
        contact.phoneNumber = phone;
        contact.address = addr;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Degree: " << Degree << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
        cout << "Phone Number: " << contact.phoneNumber << endl;
        cout << "Address: " << contact.address << endl;
    }
};

int main() {
    // Creating an instance of the class
    Student student1;

    // Adding initial details using addDetails
    student1.addDetails("John Doe", 101, "Computer Science", 8.5, "123-456-7890", "123 Main St");

    // Displaying the details after adding
    cout << "Student Details:" << endl;
    student1.displayDetails();

    return 0;
}

