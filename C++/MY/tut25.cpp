#include<iostream>
using namespace std;
 class complex{

    private:
    int a;
    int b;

    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void print(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
    void sum(complex z,complex zz){
        a= z.a+zz.a;
        b= z.b+zz.b;
    }

 };

int main(){
    complex q,w,e;
    q.setdata(2,3);
    q.print();

    w.setdata(5,4);
    w.print();

    e.sum(q,w);
    e.print();
    return 0;
}