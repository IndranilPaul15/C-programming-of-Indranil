#include<stdio.h>
int main()
{
	int n,i,x,sum=0;
	printf("Enter Number: ");
	scanf("%d",&x);
	for(n=1;n<=x;n=n+2)
	{
		i=n*n;
		sum=sum+i;
	}
	printf("Answer = %d",sum);
	return 0;
}
