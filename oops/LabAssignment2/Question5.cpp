#include<iostream>
using namespace std;
class Complex {
private:
    float real;
    float imaginary;
    void setComplex(float real, float imaginary){
        this.real=real;
        this.imaginary=imaginary;
    }
    void displayComplex(){
     cout << real << " + " << imaginary << "i" << endl;
    }

};
int main() {
    Complex c1, c2 ;

    c1.setComplex(3.4, 5.2);

    c2.setComplex(4.6, 3.8);

    cout << "First Complex Number: ";
    c1.displayComplex();

    cout << "Second Complex Number: ";
    c2.displayComplex();

    

    return 0;
}