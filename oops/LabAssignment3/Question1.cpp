#include<iostream>
using namespace std;
class details{
    public:
    int marks;
    int rollno;
    void setValue(int marks,int rollno){
        this->marks=marks;
        this->rollno=rollno;
    }
    void dis(){
        cout << "Marks: " << marks << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main(){
    details str;
    details* p=&str;
    str.setValue(2,3);
    p->dis() ;
    return 0;

}