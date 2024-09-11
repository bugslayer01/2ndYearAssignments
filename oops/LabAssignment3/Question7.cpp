#include<iostream>
using namespace std;
class storage{
    public:
    int a;
    int b;
    int sum;
    void set(int a ,int b){
        this->a=a;
        this->b=b;
    }
};
void sum(storage &ob){
    ob.sum=ob.a+ob.b;
}
int sumr(storage ob){
    ob.sum=ob.a+ob.b;
    return ob.sum;
}
int main(){
    storage ob;
    storage ob1;
     ob.set(5, 10);   
    ob1.set(3, 7);
    sum(ob);
    ob1.sum=sumr(ob1);
    // add display statement


}