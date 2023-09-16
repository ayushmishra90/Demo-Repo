//Pre and post increment operators
#include<stdio.h>
int main()
{
	int i =1, j, k, c, b;
	j=i++; // j=1, i=2
	printf("%d %d", i, j);// i=2, j =1
	k=++i;
	printf("\n%d %d", k, i);// k=3, i=3
	c=++i + j++;
	printf("\n%d", c);// c= 4 + 1=5 // i=4, j=2, k=3
	c=i++ + ++j;
	printf("\n%d", c);// c= 4 + 3=7 // i=5, j=3, k=3
	printf("\n%d %d %d", i, j,k);
	c= i++ + j++;
	printf("\n%d", c);// c=5+3=8// i=6, j=4, k =3
	return 0;
}

// conditional operator
// int a= 10; int b = 15;
// x = (a>b) ? a : b;
// comma operator
// value = (x = 10, y =5, x+y) 
//first assigns 10 to x, then assigns 5 to y, 
//finally x+y to value
