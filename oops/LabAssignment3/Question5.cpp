#include <iostream>
using namespace std;
class Rectanglr
{
private:
    int h, w;

public:
    void set(int h, int w)
    {
        this->w = w;
        this->h = h;
    }
    int area()
    {
        return h * w;
    }
};
int main()
{
    int n;
    cout << "enter the number of rectangle" << endl;
    cin >> n;
    Rectanglr rec[n];

    for (int i = 0; i < n; i++)
    {
        int w, h;
        cout << "Enter width and height for rectangle " << i + 1 << ": ";
        cin >> w >> h;
        rec[i].set(w, h);
        cout << "area is " << rec[i].area();
    }
}

//////////////////////////////////////////////////////////////////////////////////////