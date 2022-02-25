#include<stdio.h>
void main()
{
	int a,b,i,j,is_prime;
	scanf("%d%d",&a,&b);
	for(i=a; i<=b; i++)
	{
		is_prime=1;
		for(j=2; j<=i/2; j++)
		{
			if(i%j==0)
			{
				is_prime=0;
				break;
			}
		}
		if(is_prime==1)
		{
			printf("%d is a prime",i);
		}
		else
		{
			printf("%d is not a prime",i);
		}
	}
}
