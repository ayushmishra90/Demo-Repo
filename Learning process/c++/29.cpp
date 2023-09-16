#include<iostream>

using namespace std;
class Complex
{
    int a,b;
    public:
    //constructor
    Complex(void);
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

    //constructor
Complex ::Complex(void)
{
    a=0;
    b=0;
}
int main(){

    Complex c;
    c.printNumber();

return 0;
}