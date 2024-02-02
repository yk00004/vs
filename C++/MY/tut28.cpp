#include <iostream>
using namespace std;
class y;


class x
{
    int data;

public:
    friend void add(x o1, y o2);
    void setdata(int valu)
    {
        data = valu;
    }
};


class y
{
    int num;

public:
    friend void add(x o1, y o2);
    void setdata(int valu)
    {
        num = valu;
    }
};


void add(x o1, y o2)
{
    cout << " x and y oblects given me " << o1.data + o2.num;
}
int main()
{
    x a1;
    y b1;
    a1.setdata(4);
    b1.setdata(5);
    add(a1, b1);

    return 0;
}