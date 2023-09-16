#include <iostream>
#include <math.h>

using namespace std;
void check(long int a,long int b,long int c)
{
    long int i;long int e,f,g;
      for ( i = 0; i < pow(2,10); i++)
        {
          e=a^i;
          
          f=b^i;
         
          g=c^i;
         
        
		if (e<f && f<g)
        {
           cout<<i<<endl;
           break;
        }
        
               
        }
        if(i==pow(2,10))
        {
            cout<<"-1"<<endl;
            
        }
}

 int main() {
	long int n;
	cin>>n;
	
	while(n--)
	{
        long int a,b,c;
        cin>>a >>b >>c;
        
        check(a,b,c);
      
        
	}


	return 0;
}
