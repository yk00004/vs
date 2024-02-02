#include <iostream>
using namespace std;


class complex
{
    int a, b;

public:
    complex(int, int); //perameterized constructer
   
    void printn() {
        cout << "your num is " << a << " + " << b << "i" << endl;
    }
};


complex ::complex(int x, int y)
    {
        a = x;
        b = y;
    }


int main()
{
    complex a(4, 6); // emplicit call
    a.printn();

    complex b = complex(3, 6); // explicit call
    b.printn();
    return 0;
}