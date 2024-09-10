#include<iostream>
using namespace std;
class cal{
    private :
    double add(double a, double b){
        return a+b;
    }
    public:
    double average(double a,double b){
        double sum = add(a,b);
        double average = sum/2;
        return average;
    }
};
int main(){
    cal calculate;
    double  a,b;
    cout << " entre two no"<< endl;
    cin>>a;cin>>b;
    double av =calculate.average(a,b);
    cout << av<<endl;
}