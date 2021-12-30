#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit");
	}
	else if(sp<cp)
	{
		printf("loss");
	}
	else
	{
		printf("zero");
	}
}
