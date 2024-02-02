#include<iostream>
using namespace std;
int main(){
    int arr[4]={4,5,22,3};
    int* p=arr;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<p<<endl;
    //     cout<<*p<<endl;
    //     p++;

    // }
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<(p+1)<<endl;
    cout<<*(p+1)<<endl;
    cout<<(p+2)<<endl;
    cout<<*(p+2)<<endl;
    cout<<(p+3)<<endl;
    cout<<*(p+3)<<endl;
    
    
    return 0;
}