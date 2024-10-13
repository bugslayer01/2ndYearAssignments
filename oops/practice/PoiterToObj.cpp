#include <iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void set(int a,int b){
        real=a;
        imaginary=b;
    }
    void get(){
        cout<<"complex no is ="<<real<<"="<<imaginary<<"i"<<endl;
    }
};
int main(){
    complex *obj = new complex();
}

