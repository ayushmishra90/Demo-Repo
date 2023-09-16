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
	//result = pow(x,n); 2^3 = 2*2*2, 3^4 = 3*3*3*3, 2^5
	while(i<=n)// 1,2, 3, ...., n
	{
		result=result*x;
		i=i+1;
	}

	printf("%d", result);
}
