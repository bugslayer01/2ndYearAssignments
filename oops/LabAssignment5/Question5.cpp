// 5.	How can you use constructors and destructors in C++ inheritance? Write a program to illustrate

// also impleentiong 6th question along with 5th

// 6.	Implement a base class Book with attributes title, author, and price.
//  Then, create a derived class Textbook that inherits from Book and adds a new attribute subject.
//  Demonstrate how single inheritance is used to manage the data for general books and textbooks.

#include<iostream>
using namespace std;
class Book {
    string title;
    string author;
    int price;
    public:
Book(string t, string a, int p = 100) : title(t), author(a), price(p) {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}

};
class TextBook : public Book{
    string subject;
    public:
    TextBook(string t,string a,string s,int p=10):Book(t,a,p),subject(s){
        cout<<"_____________________________________________________________________"<<endl;
        cout << "Subject:" << subject << endl;
    }
};
int main(){
Book bk("life suck","dev");
TextBook xt("life suck","dev","cs");
}

// should i make a friend function to display both the classes ???????????........

// just leaving the rest of questions for sone other time its just basic
