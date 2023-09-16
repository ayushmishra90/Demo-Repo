#include<bits/stdc++.h>
using namespace std ;
int countGoodSubstrings(string s) {
        const char *x=s.c_str();
        int k=0;
        for (int i = 0; i < s.length()-2   ; i++)
        {
            if (x[i]!=x[i+1]!=x[i+2])
            {
                k++;
            }
            
        }
        return k;
    }
int main()
{
     
return 0;
}