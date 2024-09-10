#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails(string n, int r, string d, string h, float c) {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
        currentCGPA = c;
    }
    void updateDetails(string n, int r, string d, string h) {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
    }

    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }

    void updateHostel(string newHostel) {
        hostel = newHostel;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student student1;

    student1.addDetails("Alice", 101, "B.Tech Computer Science", "Hostel A", 9.1);

    cout << "Initial Details of Student 1:" << endl;
    student1.displayDetails();
    
    student1.updateCGPA(9.3);
    student1.updateHostel("Hostel B");

    cout << "\nUpdated Details of Student 1:" << endl;
    student1.displayDetails();

    return 0;
}
