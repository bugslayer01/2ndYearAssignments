// Q3 (b) Write a program in C++ having the following properties: (3 marks)
// • Define a class having two data variables of integer type in private scope.
// • Array of objects should be declared in main function dynamically (using new
// operator)
// • Input the data variables using a member function named as void set_data() in
// public scope.
// • Increment the values of data variables by one using a member function named
// void update_data() in public scope having array of object as an argument.
// • For displaying the updated value of data variables, create a member function
// named as void output() in public scope.
#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    void set_data(int a, int b)
    {

        this->a = a;
        this->b = b;
    }
    void update_data(A arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i].a++;
            arr[i].b++;
        }
    }
    void output()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of objects: ";
    cin >> n;
    A *ptr = new A[n];
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cout << "enter a,b" << endl;
        cin >> a;
        cin >> b;
        ptr->set_data(a,b);
        ptr++;
    }
}

