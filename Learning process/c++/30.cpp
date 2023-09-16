#include<iostream>

using namespace std;
class Complex
{
    int a,b;
    public:
    //constructor
    Complex(int ,int);
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

    //constructor
Complex ::Complex(int x ,int y)
{
    a=x;
    b=y;
}
int main(){
    Complex y=Complex(4,6);
    Complex c(2,3);
    c.printNumber();
    y.printNumber();

return 0;
}