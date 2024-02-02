#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnum(int n, int m)
    {
        a = n;
        b = m;
    }
    friend complex sum(complex o1, complex o2);

    void print()
    {
        cout << "your num :" << a << " +" << b << "i" << endl;
    }
};
complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sumw;
    c1.setnum(2, 4);
    c1.print();

    c2.setnum(4, 5);
    c2.print();

    sumw = sum(c1, c2);
    sumw.print();
    return 0;
}