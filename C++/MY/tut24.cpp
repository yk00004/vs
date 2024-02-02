#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter employee id :";
        cin >> id;
        cout << endl;
        count++;
    }
    void getdata()
    {
        cout << "employee id is : " << id << " end employee no " << count;
    }
    static void getcount(){
        cout<<"the valu of count :"<<count;
    }
};

int employee::count = 40;
int main()
{
    employee yash;
    yash.setdata();
    yash.getdata();
    employee::getcount();
    return 0;
}