#include<stdio.h>
void main()
{
	int p, n=1, i, flag;
	printf("Enter the range for which you want to see the prime numbers (1 to ......)\n");
	scanf("%d", &p);
	if(p<=1)
	{
		printf("Invalid input\n");
		return;
	}
	else
	{
		for(n=2; n<=p;n++)
		{
			flag=0;
			for(i=2; i<n; i++)
				{
					if(n%i==0)
						{
							flag=1;
							break;
						}
				}
			if(flag==0)
			printf("%d\t",n);
		}
	}

}
