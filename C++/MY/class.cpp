#include<iostream>
using namespace std;

class employe{
    private:
        int a,b,c;
    public:
        int d,e;

        void setvalu(int a1,int b1,int c1);
        void getvalu();
       
};

void employe ::getvalu(){
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
            cout<<"value of c is "<<c<<endl;
            cout<<"value of d is "<<d<<endl;
            cout<<"value of e is "<<e<<endl;
        }

void employe::setvalu(int a1,int b1,int c1){
 a=a1;
 b=b1;
 c=c1;
 
}



int main(){
    employe yash;
    yash.d=4;
    yash.e=6;
    yash.setvalu(1,2,3);
    yash.getvalu();
    return 0;
}