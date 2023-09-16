#include<stdio.h>
void main()
{
	int marks[2000],i, count;
	printf("How many students do you have?\n");
	scanf("%d", &count);//75
	printf("Enter marks\n");
	for(i=0;i<count;i++)
	{
		printf("Enter marks for student %d: ", i+1);
		scanf("%d", &marks[i]);
	}
	printf("\nThe entered marks are:");
	for(i=0;i<count;i++)
	{
		printf("\nMarks for student %d is %d\t",i+1,marks[i]);
	}
}
