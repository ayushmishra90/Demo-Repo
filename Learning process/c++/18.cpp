#include<iostream>

using namespace std;
int facttorial(int v){
    if (v<=1)
    {
      return 1;  /* code */
    }
    
    return v*facttorial(v-1);
}

    int fib(int a)
    {
        if (a<2)
        {
            return 1;/* code */
        }
        
        return fib(a-2)+fib(a-1);
    }

int main(){
    int a;
    cout<<"enter the num";
    cin>>a;
   cout<<" the factorial is"<<facttorial(a)<<endl;; 
   cout<<" the fib is"<<fib(a)<<endl;; 
    

return 0;
}