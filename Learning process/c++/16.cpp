#include<iostream>

using namespace std;
void swap(int &w,int &g){
    int temp=w;
    w=g;
    g=temp;
}

int main(){
 int a =5 ,b=8;
    cout<<a<<endl<<b;
    swap(a,b);
    cout<<a<<endl<<b;
    

        


return 0;
}