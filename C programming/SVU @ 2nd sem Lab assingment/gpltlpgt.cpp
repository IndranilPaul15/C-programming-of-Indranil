#include<stdio.h>
int main()
{
	int n,i,j,isprime,gplt,lpgt;
	printf("Enter num:");
	scanf("%d",&n);
	gplt=0;
	for(i=n-1;i>=2;i--)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime)
		{
			gplt=i;
			break;
		}
	}
	if(gplt==0)
	{
		printf("There is no prime number less than %d\n",n);
	}
	else
	{
		printf("The greatest prime number less than %d is %d\n",n,gplt);
	}
	lpgt=n+1;
	while(1)
	{
		isprime=1;
		for(i=2;i<=lpgt/2;i++)
		{
			if(lpgt%i==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime)
		{
			break;
		}
		lpgt++;
	}
	printf("The least prime number greater than %d is %d\n",n,lpgt);
	return 0;
}
