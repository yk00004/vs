#include<iostream>
using namespace std;
class complex{
    int a,b,c;
    public:
    complex(int x ,int y=7){
        a=x;
        b=y;
    }
    // complex(int x){
    //     a=x;
    //     b=0;
    // }
    complex(int x,int y,int z ){
        a=x;
        b=y;
        c=z;
    }
    void print(){
        cout<<"your num is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c(5);
    c.print();
    complex c2(6);
    c2.print();
    return 0;
}