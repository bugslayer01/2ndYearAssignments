#include <iostream>
using namespace std;

void modifyReference(int* x) {
    *x = 100;  // This modifies the original value because x is a reference
}

int main() {
    int a = 10;
    modifyReference(&a);  // Pass by reference, a reference to a is passed
    cout << "Value of a after calling modifyReference: " << a << endl;  // a is now 100
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

void modifyReference(int& x) {
    x = 100;  // This modifies the original value because x is a reference
}

int main() {
    int a = 10;
    modifyReference(a);  // Pass by reference, a reference to a is passed
    cout << "Value of a after calling modifyReference: " << a << endl;  // a is now 100
    return 0;
}