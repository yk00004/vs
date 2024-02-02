#include <iostream>
using namespace std;

struct employ
{
    int id;
    long int no;
    string name, qua, exp;
};

int main()
{
    int ex = 5, n, eid;
    char yn;
    cout << endl;
    cout << "enter num of employ : ";
    cin >> n;
    cout << endl;
    cout << endl;

    struct employ emp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter employ ID              : ";
        cin >> emp[i].id;
        cout << "------------------------------------" << endl;
        cout << "eneter employ name           : ";
        cin >> emp[i].name;
        cout << "enter employ qulification    : ";
        cin >> emp[i].qua;
        cout << "enter employ experience      : ";
        cin >> emp[i].exp;
        cout << "enter employ Contect number  : ";
        cin >> emp[i].no;
        cout << "------------------------------------" << endl
             << endl
             << endl;
    }

    cout << "Press Y to get employee detail,press N to exit : ";
    cin >> yn;
    while (yn == 'y' || yn == 'Y')
    {
        cout << "Enter employe ID : ";
        cin >> eid;
        for (int i = 0; i < n; i++)
        {
            if (eid == emp[i].id)
            {
                ex = 6;
                cout << endl
                     << endl;
                cout << "-------------------------------------" << endl;
                cout << "eneter employ name           : " << emp[i].name << endl;
                cout << "enter employ qulification    : " << emp[i].qua << endl;
                cout << "enter employ experience      : " << emp[i].exp << endl;
                cout << "enter employ Contect number  : " << emp[i].no << endl;
                cout << "-------------------------------------" << endl
                     << endl;
                break;
            }
            else if (eid =! emp[i].id)
            {
                ex=5;
            }
        }

        if (ex == 5)
        {
            cout << "**********************" << endl;
            cout << "ERROR : ENTERED EMPLOYEE ID DOES NOT EXIST " << endl;
            cout << "**********************" << endl
                 << endl;
        }
        cout << "Press Y to get employee detail,press N to exit : ";
        cin >> yn;
    }

    return 0;
}