#include<iostream>
class hi{
    public:
    void dis();
    static int staticVaraible; 
    int a =5;// local variable
};

int a=5; // global variable

int hi::staticVaraible=8;// class method outside class

void hi::dis(){
    std::cout<<"this is a local variable"<<a;
    std::cout<<"this is a global variable"<< ::a; // accessing global varisble
}

int main(){
    hi hell;
    hell.dis();
}