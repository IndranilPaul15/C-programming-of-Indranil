#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the n term :");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		sum=sum+((2*i-1)*(2*i-1));
	}
	printf("sum of series 1^2+3^2+5^2+7^2+... upto n terms=%d",sum);
	return 0;
}
