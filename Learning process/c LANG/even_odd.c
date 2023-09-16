#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	// decision making
	if(x%2==0)
	{
		printf("\nEven");
	}
	else
	{
		printf("\nOdd");
	}
	return 0;
}
