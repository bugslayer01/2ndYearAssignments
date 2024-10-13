#include <iostream>
using namespace std;

int main() {
    string original = "does this even matter what i do with my life ";
    int count = 0;
    string temp = "";

    for (int i = 0; i < original.length(); i++) {
        bool isPresent = false;
        for (int j = 0; j < temp.length(); j++) {
            if (temp[j] == original[i]) {
                isPresent = true;
                break;
            }
        }
        if (!isPresent) {
            temp += original[i];
            count++;
        }
    }

    cout << "Distinct elements:" << temp << endl;
    cout << "Total number of distinct elements: " << count << endl;

    return 0;
}
