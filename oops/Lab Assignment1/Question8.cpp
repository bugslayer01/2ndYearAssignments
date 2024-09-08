//  Write a program to solve the following problem A library charges a fine for every book return late.
//  For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
//   If you return the book after 30 days your membership will be cancelled .
// WAP to accept no. of days the member is late to return the book and display the fine or appropriate message.
#include <iostream>
using namespace std;
class Books
{
public:
    int getDays()
    {
        int daysLate;
        cout << "Please enter the no of days the book is late by" << endl;
        cin >> daysLate;
        return daysLate;
    }

    int calFine(int daysLate)
    {
        int fine = 0;
        if (daysLate <= 5)
        {
            fine = 50; // 50 paise
        }
        else if (daysLate <= 10)
        {
            fine = 100; // 1 rupee
        }
        else if (daysLate > 10 && daysLate <= 30)
        {
            fine = 500; // 5 rupees
        }
        else
        {
            cout << "Your membership has been cancelled." << endl;
        }
        return fine;
    }
};

int main()
{
    Books book;
    int daysLate = book.getDays();
    int fine = book.calFine(daysLate);
    cout << "fine=" << fine << endl;
    return 0;
}