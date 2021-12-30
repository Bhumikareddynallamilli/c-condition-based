#include<stdio.h>
void main()
{
	int sellingprice,costprice;
	printf("enter the sellingprice,costprice");
	scanf("%d%d",&sellingprice,&costprice);
	if(sellingprice>costprice)
	{
		printf("profit");
	}
	else
	{
		printf("loss");
	}
}
