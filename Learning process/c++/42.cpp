#include<iostream>
#include<math.h>

using namespace std ;
class ncalculator
{
    int a;
    int b;
    public:
    sum(int a,int b)
    {cout<< (a+b)<<endl;}
     diff(int a,int b)
    {cout<< a-b<<endl;}
      prod(int a,int b)
    {cout<< a*b<<endl;}
     quot (int a,int b)
    {cout<< a/b<<endl;}
    
};
class scalculator
{
    int a=0;
    int b=0;
    public:
    rem(int a,int b)
    {cout<< a%b<<endl;}
     cosine(int a,int b)
    {cout<< cos(a)<<endl;}
      sine(int a,int b)
    {cout<< sin(a)<<endl;}
     tangent(int a,int b)
    {cout<< tan(a)<<endl;}
    
};
class hcalculator :public ncalculator,public scalculator
{

};
int main()
{
   hcalculator as;
     as.sum(3,5);
     as.cosine(0,0);
     as.sine(0,0);
     as.tangent(0,0);

return 0;
}