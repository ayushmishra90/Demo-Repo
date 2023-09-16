#include<stdio.h>
void main()
{
	
	int num[5]={45, 56, 78, 89, 67};
	
	printf("%d\n",num[4]);
	printf("%d\n",&num[0]);
	printf("%d\n",&num[1]);
	printf("%d\n",&num[2]);
	printf("%d\n",num[5]);
	char name[]={"programming"};
	printf("%c\n", name[3]);
	printf("%d\n",&name[0]);
	printf("%d\n",&name[1]);
	printf("%d\n",&name[2]);
	printf("%d\n",name);
	printf("%s", name);
}
