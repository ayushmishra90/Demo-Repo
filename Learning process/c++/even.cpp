#include<stdio.h>
int main()
{
   int a,b=1,c=0;
   printf("enter the no.\n");
   scanf("%d",&a);
  while(b<=(a-1))
   {
    printf("%d+",b);
   b=b+2;
   if (b==a)
   {
    printf("%d\n",b);
    
   }
   c=c+b;
    }
    printf("%d",c+1);
return 0;
} 