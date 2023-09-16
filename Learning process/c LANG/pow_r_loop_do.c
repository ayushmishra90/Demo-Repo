#include<stdio.h>
#include<math.h>
void main()
{
	// finding x^n
	int x, n, result=1,i=1;
	printf("\nEnter x:");
	scanf("%d", &x);
	printf("\nEnter n:");
	scanf("%d", &n);
	//result = pow(x,n);
	do
	{
		result=result*x;
		i++;
	}
	while(i<=n);

	printf("%d", result);
}
