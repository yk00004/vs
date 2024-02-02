#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    int** c=&b;
    // return 0;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*c<<endl;

    cout<<c<<endl;
    cout<<&b<<endl;

    cout<<&c<<endl;

    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<**c<<endl;
    

    return 0;
}