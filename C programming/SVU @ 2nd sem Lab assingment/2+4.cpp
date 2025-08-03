#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter number ");
	scanf("%d",&n);
	for(i=0;i<=n/2;i++)
	{
		sum=sum+2*i;
	}
	printf("%d",sum);
	return 0;
}
