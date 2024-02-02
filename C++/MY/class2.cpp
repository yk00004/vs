#include<iostream>
using namespace std;

class animal{
    private:
        int eye,noice;
    public:
        int lag,hands;

        void getdata(int a,int b);
        void setdata();
};
 void animal :: getdata(int a,int b){
    eye=a;
    noice=b;
 }
 void animal:: setdata(){
    cout<<"number of eye "<<eye<<endl;
    cout<<"number of noice "<<noice<<endl;
    cout<<"number of lag "<<lag<<endl;
    cout<<"number of hands "<<hands<<endl;
 }

int main(){
    animal dog;
    dog.lag=4;
    dog.hands=0;
    dog.getdata(2,1);
    dog.setdata();

    

    return 0;
}