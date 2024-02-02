#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
    void printnum()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)
{
    a = 0;
    b = 2;
}

int main()
{
    complex c;
    c.printnum();
    return 0;
}