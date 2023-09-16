#include<iostream>
using namespace std ;
void cyclicswap(int *a,int *b,int *c)
{
    int *k;
    *k=*c;
    *c=*b;
    *b=*a;
    *a=*k;
}
int main()
{
     int a,b,c;
     cin>> a >> b >> c ;
     int *x=&a;
     int *y=&b;
     int *z=&c;
     cyclicswap(x,y,z);
     cout<<a<<" "<<b<<" "<<c<<" ";
return 0; 
}