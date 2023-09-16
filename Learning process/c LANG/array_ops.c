#include<stdio.h>
void main()
{
	int marks[30]={12, 45, 56, 78, 89, 51, 43, 9, 7, 68, 87, 93, 77, 25, 61, 44, 72, 90, 1, 36},i, count, key, flag=0, max=-1000, min=1000, pos;

/*	// search a number
	printf("Enter the number you want to search:\n");
	scanf("%d", &key);

	for(i=0;i<20;i++)
	{
		if(marks[i]==key)
		{
		printf("\nFound at %dth position", i+1);
		flag=1;
		break;
		}
	}
	if(flag==0)
	printf("\nElement not found");

}*/
//Find the highest and the least mark
for(i=0;i<20;i++)
	{
		if(marks[i]>max)
		max=marks[i];
    }
    printf("\nHighest marks is %d", max);

    for(i=0;i<20;i++)
	{
		if(marks[i]<min)
		min=marks[i];
    }
    printf("\nLeast marks is %d", min);

 // insertion
 count=20;
 printf("\nEnter the position where you want to enter:\n");
 scanf("%d", &pos);
 printf("Enter the value which you want to enter:\n");
 scanf("%d", &key);
    if(pos==count+1)//insertion at the end
    {
    	marks[count]=key;
    	count++;
		printf("\n%d", count);
	}
    else // insert anywhere else
	{
    	for(i=count;i>=pos;i--)

		{
			marks[i]=marks[i-1];
		}

    	marks[pos-1]=key;
    	count=count+1;
	}
	printf("\n%d", count);

	printf("\nThe entered marks are:");
	for(i=0;i<count;i++)
	{
		printf("\nMarks for student %d is %d\t",i+1,marks[i]);
	}
}

