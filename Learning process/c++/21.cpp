#include<iostream>

using namespace std;

    class student

    {
    private:
        /* data */int a,b,c;
    public:
        int d,e ;
       
        void setdata(int a1,int b1, int c1);
        void getdata(){
            cout<<"the value of a is"<<a<<endl; 
            cout<<"the value of b  is"<< b<<endl; 
            cout<<"the value of c is"<<c<<endl; 
            cout<<"the value of d is"<<d<<endl; 
            cout<<"the value of e is"<<e<<endl;             

        }
    };
    
    void student::setdata(int a1, int b1,int c1/* args */){
        a= a1;
        b= b1;
        c= c1;
    };
int main(){
    student ayush;
    ayush.d= 6;
 ayush.e= 5;
ayush.setdata(1,2,3)   ;
ayush.getdata();
 
   

return 0;
}