
#include<iostream>

using namespace std;
class Complex
{
    int a,b;
    public:
    //constructor
   Complex(int x ,int y)
{
    a=x;
    b=y;
}
Complex(int x )
{
    a=x;
    b=0;
}
Complex()
{
    a=0;
    b=0;
}
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

    //constructor

int main(){
    Complex y=Complex(4);
    Complex c(2,3);
    Complex h;
    
    c.printNumber();
    y.printNumber();
    h.printNumber();

return 0;
}
