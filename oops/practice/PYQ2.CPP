// Q4. Write a program in C++ having a class Tracker that tracks the footsteps of a user.
// Tracker should have three private data members
// : Personld, step_count, stair_count. The
// class should satisfy the following requirements: (5 marks)

// (a) A parameterized constructor should be defined to initialize data members. Personld
// should be input by the user, whereas step count and stair_count if not known may be
// set as 0 using constructors with default arguments.

// (b) A member function incrementCount(int n) to be defined outside the class that
// increment the step_count and stair_count by the value n.
// i.e. step_count = step_count + n;
// stair_count = stair_count + n;

// (c) A non-member function convertStep() should be provided that converts stair_count
// to step_count (Assuming I stair_count = 2 step_count).

// (d) A displayCount0 function should be provided that displays the Personld and updated
// step_count (after increment and conversion of stair_count to step_count).

// (e) In addition, the class must use array of objects for creating the objects and track
// how many Tracker objects are created. A means for querying this count should be
// provided. The code must not use any global variables. (Hint: Use static members
// and static functions to display the count of Tracker objects.)
#include <iostream>
using namespace std;
class Tracker
{
    int Personld;
    int step_count;
    int stair_count;

public:
    Tracker(int a, int b = 0, int c = 0) : Personld(a), step_count(b), stair_count(c) {}
    void incrementCount(int n);

    friend void convertStep(Tracker &aa);
    
    void displayCount(){
        cout<<"steps="<<step_count<<endl;
    }
};

void Tracker::incrementCount(int n)
{
    step_count = step_count + n;
    stair_count = stair_count + n;
}
void convertStep(Tracker &aa)
{
    aa.stair_count += 2 * aa.step_count;
}
int main(){
    
    Tracker *a[9];
    for (int  i = 0 ; i<9; i++){
        a[i]= new Tracker(i);
    }
}