#include <iostream>
using namespace std;
class shop
{
private:
    int prize[100];
    int idno[100];
    int count;

public:
    void counter()
    {
        count = 0;
    }
    void setprize();
    void displayprize();
};

void shop::setprize()
{
    cout << "enter id number :";
    cin >> idno[count];
    cout << endl;
    cout << "enter prize :";
    cin >> prize[count];
    count++;
}

void shop::displayprize()
{
    for (int i = 0; i < count; i++)
    {
        cout << "your id no and prize is " << idno[i] << "and" << prize[i] << endl;
    }
}

int main()
{
    shop navrang;
    navrang.counter();
    navrang.setprize();
    navrang.setprize();
    navrang.setprize();
    navrang.displayprize();
    return 0;
}