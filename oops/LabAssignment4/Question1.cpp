// Create a class named 'Rectangle' with two data members -
//     length and breadth and a function to calculate the area which is 'length*breadth'.The class has three constructors which are : 
//     (a)having no parameter - values of both length and breadth are assigned zero.
//     (b)having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
//     (c)having one number as parameter - both length and breadth are assigned that number.Now,
//     create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
#include<iostream>
using namespace std;
class Rectangle{
    double l,b;
    public:
    double area(){
        return l*b;
    }
    Rectangle(){
        l=0;
        b=0;
    }
    Rectangle(double l,double b){
        this->l=l;
        this->b=b;
    }
    Rectangle(double num){
        l=num;
        b=num;
    }
    void dis(){
        cout<<"area is "<< area()<<endl;
    }
};
int main(){
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(5,4);
    r1.dis();
    r2.dis();
    r3.dis();

}