#include<stdio.h>
#include<math.h>
void main()
{
	// finding x^n
	int x, n, result=1,i;
	printf("\nEnter x:");
	scanf("%d", &x);
	printf("\nEnter n:");
	scanf("%d", &n);
	//result = pow(x,n);
	for(i=1;i<=n;i++)
	{
		result=result*x;
	}

	printf("%d", result);
}

//print nos between 1 and n
//print even nos between 1 and n
