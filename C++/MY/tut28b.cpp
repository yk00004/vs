#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;
    friend void exch(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exch(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exch(c1 &x, c2 &y)
{
    int tem = x.val1;
    x.val1 = y.val2;
    y.val2 = tem;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.indata(34);
    o2.indata(343);
    exch(o1, o2);
    cout << "the value after swaping :";
    o1.display();
    cout << "the value after swaping :";
    o2.display();

    return 0;
}