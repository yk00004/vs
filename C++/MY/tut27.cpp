#include <iostream>
using namespace std;
class complex;

class calculator
        {
        public:
            int add(int a, int b)
                {
                    return (a + b);
                }

            int sumcom(complex, complex);
        };

class complex
        {
            int a, b;
            // friend int calculator::sumcom(complex, complex);
            friend class calculator;

        public:
            void setnumber(int n1, int n2)
                {
                    a = n1;
                    b = n2;
                }
                
            void printnum()
                {
                    cout << "your num is " << a << " + " << b << "i" << endl;
                }
        };

int calculator::sumcom(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }

int main(){

    complex o1, o2;
    o1.setnumber(1, 5);
    o2.setnumber(3, 8);
    calculator cal;
    int x = cal.sumcom(o1, o2);
    cout << x;
    return 0;
}