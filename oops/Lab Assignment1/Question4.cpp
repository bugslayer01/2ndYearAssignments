#include <iostream>
using namespace std;
// here i am using concerpts of oops but you dont need to

class Converter {
public:


    double convert(double tempinC){
        double temp =(9*tempinC)/(5) +32;
        return temp;

    }
    double getInput() {
        double value;
        cout << "Enter the value to convert: ";
        cin >> value;
        cout << "You entered: " << value << endl;
        return value;
    }
};

int main() {
    Converter conv;  
    double tempInCelcius = conv.getInput();
    double tempInF = conv.convert(tempInCelcius);
    cout<< tempInF<<endl;

    return 0;
}