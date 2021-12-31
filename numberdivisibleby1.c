#include<stdio.h>
void main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	if(number%1==0)
	{
		printf("divisible by 1\n");
	}
	if(number%2==0)
	{
		printf("divisible by 2\n");
	}
	if(number%3==0)
	{
		printf("divisible by 3\n");
	}
	if(number%4==0)
	{
		printf("divisible by 4");
	}
}
