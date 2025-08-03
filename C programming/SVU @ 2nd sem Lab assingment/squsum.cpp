#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter number ");
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i++)
	{
		sum=sum+(2*i-1)*(2*i-1);
	}
	printf("%d",sum);
	return 0;
}
