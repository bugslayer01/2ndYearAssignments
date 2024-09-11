#include <iostream>
using namespace std;
inline int cube(int n) {
    return n * n * n;   
}

int main() {
    int number;

    cout << "Enter a number ";
    cin >> number;
    cout << "The cube  is: " << cube(number) << endl;
    return 0;
}
