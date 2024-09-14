// 2.	Practice protected access specifier in inheritance.
//      In the base class declare a variable which is protected and access it in the derived class.


// unknowly implemented 3rd Question as well in 2nd 

#include<iostream>
using namespace std;
class Question2
{
private:
   int a=5;
public:
    int b=6;
    protected:
    int c=7;
};

class Derived : public Question2{
        public:
    void dis(){
    // cout<< "private  "<<a<<endl;
    cout<< "public "<<b<<endl;
    cout<< "protected "<<c<<endl;
    }
};
int  main(){
    Derived d;
    d.dis();
}