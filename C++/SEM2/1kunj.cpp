#include <iostream>
#include <string>
using namespace std;

int main(){
    string name,id,g[6],subjects[3];
    int sem,s[6],c[6];
    float sgpa=0;
    cout<<"Enter your ID :";
    cin>>id;
    cout<<"Enter your name :";
    cin >> name;
    cout<<"Enter your semester :";
    cin>>sem;
    cout << "Enter your subjects : " << endl;
    for (int i = 0; i < 3; i++)
    {
      cin >> subjects[i];
    }
    
    cout<<"Enter theory and practical marks of " << subjects[0] << " : ";
    cin>>s[0]>>s[1];
    cout<<"Enter theory and practical marks of " << subjects[1] << " : ";
    cin>>s[2]>>s[3];
    cout<<"Enter theory and practical marks of COM " << subjects[2] << " : ";
    cin>>s[4]>>s[5];
    for(int i=0;i<6;i++){
        if(s[i]>=80){
            g[i]="AA";
            c[i]=10;
        }
        else if (s[i]>=73 && s[i]<80){
            g[i]="AB";
            c[i]=9;
        }
        else if (s[i]>=66 && s[i]<73){
            g[i]="BB";
            c[i]=8;
        }
        else if (s[i]>=60 && s[i]<66){
            g[i]="BC";
            c[i]=7;
        }
        else if (s[i]>=55 && s[i]<60){
            g[i]="CC";
            c[i]=6;
        }
        else if (s[i]>=50 && s[i]<55){
            g[i]="CD";
            c[i]=5;
        }
        else if (s[i]>=45 && s[i]<50){
            g[i]="DD";
            c[i]=4;
        }
        else{
            g[i]="FF";
            c[i]=0;
        }
    }
    for(int i=0;i<6;i++){
        sgpa+=c[i]*2;//per subject cradit is 2 
    }
     sgpa/=12;
    cout<<"------------------------------"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Semester :"<<sem<<endl;
    cout<<"ID :"<<id<<endl;
    cout<<endl;
    cout<<"    \tTheory  Practical"<<endl;
    cout<<subjects[0] <<  "  \t"<<g[0]<<'\t'<<g[1]<<endl;
    cout<<subjects[1]<<"    \t"<<g[2]<<'\t'<<g[3]<<endl;
    cout<<subjects[2]<<"\t"<<g[4]<<'\t'<<g[5]<<endl;
    cout<<endl;
    cout<<"SGPA :"<<sgpa;
    return 0;
}