#include<stdio.h>
int main()
{
     int n;
   
     scanf("%d",&n);
     int a[n];
     int b[n];
     for (int i = 0; i < n-1; i++)
     {
       scanf("%d",&a[i]);
     }
     scanf("%d",&a[n-1]);
      for (int i = 0; i < n-1; i++)
     {
       scanf("%d",&b[i]);
     }
     scanf("%d",&b[n-1]);
     int min=a[0];
     for (int i = 0; i < n; i++)
     {
       if(min>a[i])
       {
        min=a[i];
       }
     }
     
     int c=0;
	
     	for (int i = 0; i < n; i++)
     	{
		 
     	   while(a[i]!=min && !(a[i]<min))//&& !(a[i]<min)
     	   {
     	       a[i]=a[i]-b[i];
     	       c++;
     	   } 
     	}
	
     int f=1;
	 int l=0;
     while(l<n)
     {
        if (a[0]==a[l+1])
        {
           f++;
        }
        l++;
     }
     
    
     if (f==n)
     {
       printf("%d",c);
     }
     else{
        printf("-1");
     }
     
     
return 0;
}