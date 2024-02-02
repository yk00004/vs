#include <iostream>
#include <string>
using namespace std;

class binary
{

private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onecompliment(void);
    void display(void);
};

void binary::read()
{
    cout << "enter binary num :";
    cin >> s;
}

void binary::chk_bin()
{
    // cout<<"chk bin"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not valid binary num " << endl;
            exit(0);
        }
    }
}
void binary::onecompliment()
{
    chk_bin();
    //  cout<<"onesempli"<<endl;
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    cout << "your binary num is";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary a;
    a.read();
    // a.chk_bin();
    a.onecompliment();
    a.display();
    return 0;
}