#include <stdio.h>

void main()
{
 int age;

 printf("Please Enter Your Age Here:\n");
 scanf("%d",&age);

 if ( age < 18 )
 {
  printf("You are Minor.\n");
  printf("Not Eligible to Work");
 }
 else
 {

  if (age >= 18 && age <= 60 ) 
   { 
    printf("You are Eligible to Work \n"); 
    printf("Please fill in your details and apply\n"); 
   } 
  else 
   { 
    printf("You are too old to work as per the Government rules\n");
    printf("Please Collect your pension! \n");
   }
 }
}
