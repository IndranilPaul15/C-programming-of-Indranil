#include<stdio.h>
int main()
{
	int n,i,dg,fact,sum=0,temp;
	printf("Enter number ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		dg=temp%10;
		fact=1;
		for(i=1;i<=dg;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("%d is peterson number",n);
	}
	else
	{
		printf("%d is not peterson number",n);
	}
	return 0;
}
