#include<iostream>
using namespace std ;
bool isp(string S,int start,int end )
	       {
	        
	         if(start>=end)
	         {
	             return true;
	          }
	     return (S[start]==S[end]&& isp( S,start+1, end-1));
	     }
int main()
{
     string s="assssssa";
     int so=0;
     int e=s.length()-1;
     if (isp(s,so,e))
     {
        cout<<"yes";
        /* code */
     }
     else{ 
         cout<<"no"; 
     }
     
    
return 0;
}