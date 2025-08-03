#include<stdio.h>
int main()
{
	int n,i,isprime=0;
	printf("Enter number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isprime=1;
			break;
		}
	}
	if(isprime==0)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	return 0;
}
