#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks>=35)
	{
		printf("passed in maths\n passed in chemistry\n passed in computer science");
	}
	else
	{
		printf("failed in maths\n");
		printf("failed in chemistry\n");
		printf("failed in computer science\n");
	}
}
