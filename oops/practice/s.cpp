#include<iostream>
using namespace std;
class student {
protected:
    int id ;
    int marks;
    public:
    void setData(int x,int y): id(x) , marks(y){}
}
;
class r:public student{
    public:
    void dis(){
cout<<"id"<<id<<"marks"<<marks<<endl;
    }
};
int main(){
    r rr;
    rr.setData(2,3);
    rr.dis();
}