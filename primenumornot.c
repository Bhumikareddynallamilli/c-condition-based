#include<stdio.h>
#include<math.h>
void main()
{
	int n, i, is_prime=1;
	scanf("%d",&n);
	for(i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			is_prime=0;
			break;
		}
	}
	if(is_prime ==1 && n!=1)
	{
		printf("%d is a prime",n);
	}
	else
	{
		printf("%d is not a prime",n);
	}
}
