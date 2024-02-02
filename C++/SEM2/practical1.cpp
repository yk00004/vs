#include <iostream>
using namespace std;
int main()
{
    int sem, mt[6], gp[6];
    string id, name, lg[6];
    float sgpa;
    cout << "Student ID   :   ";
    cin >> id;
    cout << "Student Name :   ";
    cin >> name;
    cout << "Semester     :   ";
    cin >> sem;
    cout << "enter computer programming theory and practical marks : ";
    cin >> mt[0] >> mt[1];
    cout << "basics of electronics theory and practical marks : ";
    cin >> mt[2] >> mt[3];
    cout << "professional communucation theory and practical marks : ";
    cin >> mt[4] >> mt[5];

    for (int i = 0; i < 6; i++)
    {
        if (mt[i] >= 80)
        {
            lg[i] = "AA";
            gp[i] = 10;
        }
        else if (mt[i] >= 73 && mt[i] < 80)
        {
            lg[i] = "AB";
            gp[i] = 9;
        }
        else if (mt[i] >= 66 && mt[i] < 73)
        {
            lg[i] = "BB";
            gp[i] = 8;
        }
        else if (mt[i] >= 60 && mt[i] < 66)
        {
            lg[i] = "BC";
            gp[i] = 7;
        }
        else if (mt[i] >= 55 && mt[i] < 60)
        {
            lg[i] = "CC";
            gp[i] = 6;
        }
        else if (mt[i] >= 50 && mt[i] < 55)
        {
            lg[i] = "CD";
            gp[i] = 5;
        }
        else if (mt[i] >= 45 && mt[i] < 50)
        {
            lg[i] = "DD";
            gp[i] = 4;
        }
        else if (mt[i] < 45)
        {
            lg[i] = "FF";
            gp[i] = 0;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        sgpa = sgpa + gp[i] * 3;
    }
    sgpa = sgpa / 18;

    cout << "------------------------------" << endl;
    cout << "Student ID   :   " << id << endl;
    cout << "Student Name :   " << name << endl;
    cout << "Semester     :   " << sem << endl;

    cout << "\t\t\t     Theory"
         << "\t    practical" << endl;
    cout << "computer programming       : " << lg[0] << "\t\t\t" << lg[1] << endl;

    cout << "basics of electronics      : " << lg[2] << "\t\t\t" << lg[3] << endl;

    cout << "professional communucation : " << lg[4] << "\t\t\t" << lg[5] << endl;
    cout << endl;
    cout << "SGPA    : " << sgpa;
    return 0;
    
}