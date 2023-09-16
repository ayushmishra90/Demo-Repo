#include<stdio.h>
#include<math.h>
void main()
{
	// finding x^n
	int x, n, result;
	printf("\nEnter x:");
	scanf("%d", &x);
	printf("\nEnter n:");
	scanf("%d", &n);
	result = pow(x,n);
	printf("%d", result);
}
