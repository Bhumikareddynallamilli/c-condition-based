#include<stdio.h>
void main()
{
	int cp,sp,p,l;
	float perc;
	printf("enter the cp and sp");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit\n");
		p=sp-cp;
		perc=p*100/cp;
		printf("profit amount:%d\n",p);
		printf("percentage:%2f\n",perc);
	}
	else if(cp>sp)
	{
		printf("loss\n");
		l=cp-sp;
		perc=l*100/cp;
		printf("loss amount:%d\n",l);
		printf("percentage:%2f\n",perc);
	}
}
