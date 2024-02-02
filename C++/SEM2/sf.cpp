#include<iostream>
#include <iomanip>
#include <ios>
#include<string>
using namespace std;

struct charuEmp{
    int id,exp;
    long int no;
    string name,qua;
    
};

int main()
{
    int n,id;
    char input;

    cout<<"Enter number of employee: ";
    cin>>n;
    
    struct charuEmp emp[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter employee id: ";
        cin>>emp[i].id;
        cout<<"----------------------------------\n";
        cout<<"Employee Name: ";
        cin>>emp[i].name;
        
        cout<<"Qualification: ";
        cin>>emp[i].qua;
        
        cout<<"Experience\t: ";
        cin>>emp[i].exp;
        
        cout<<"Contact Number: ";
        cin>>emp[i].no;
        cout<<"\n\n----------------------------------\n";
    }
    
    do {
        
        cout<<"Press Y to get another employ detail : ";
        cin>>input;
        if(input=='Y' || input=='y'){
            cout<<"Enter employee id: ";
            cin>>id;
            for(int i=0;i<n;i++){
                if(id==emp[i].id){
                    cout<<"Employee Name: "<<emp[i].name<<endl;
                    cout<<"Qualification: "<<emp[i].qua<<endl;
                    cout<<"Experience\t: "<<emp[i].exp<<endl;
                    cout<<"Contact Number: "<<emp[i].no<<endl;
                    
                }
            }
               
            
        }
        else {
            
            return 0;
            
        }
    } while (input=='Y' || input=='y');
    
    
}