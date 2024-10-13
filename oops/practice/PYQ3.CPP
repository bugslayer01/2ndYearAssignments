// (a) Create a class test_start which contain following data members in private:
// • static int tid;
// • int hour, minutes, seconds;
// and the following constructors and member functions in public:
// • test_start(): as the default constructor
// • test_start(int h, int m, int s): as the parameterized constructor.
// • test_start(test & t): as the copy constructor
// • static display_id(): static function to display the final value of t_id
// In main(), create three objects tl, t2 and t3 such that default constructor is called for t 1 ,
// parameterized constructor for t2 and copy constructor for t3. You also need to call display_id()
// function to display the final value of t_id. Call this function without the use of any object.
// [Note: Increment the t_id value every time the object is created. The final value of t_id for the
// above scenario should be 3] (5 marks)

#include <iostream>
using namespace std;
class test_start
{
    int hour, minutes, seconds;
    static int tid;

public:
    test_start() {

    }
    test_start(int h, int m, int s) :hour(h), minutes(m), seconds(s){} // test_start(test & t): as the copy constructor
    static  void display_id(){
        cout << tid<<endl;
    }
    };
    int main()
    {
        test_start t1;
        test_start t2(2,2,2);
        test_start::display_id();
    }