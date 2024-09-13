#include <iostream>
using namespace std;

class Useless {
public:
    Useless() {
        cout << "Useless class called for obj" << endl;
    }
};

class Useless2 {
public:
    Useless2() {
        cout << "Useless2 class called for arr of obj" << endl;
    }
};

int main() {
    // int
    int* p = new int; 
    *p = 42; 
    cout << *p << " q " << p << endl;

    // float
    float* h = new float; 
    *h = 42.0; 
    cout << *h << " h " << h << endl;

    // int array
    int* intarr = new int[2]; 
    intarr[0] = 1;
    intarr[1] = 1;

    // float array
    float* floatarr = new float[2]; 
    floatarr[0] = 1.0;
    floatarr[1] = 1.0;

    // class object
    Useless* obj = new Useless; 

    // array of objects
    Useless2* obj1 = new Useless2[2]; 
    
    // Cleanup
    delete p;
    delete h;
    delete[] intarr; 
    delete[] floatarr;
    delete obj;
    delete[] obj1; 

    return 0;
}
