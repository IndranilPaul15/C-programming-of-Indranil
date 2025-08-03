#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the n term :");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		sum=sum+2*i;
	}
	printf("sum of series 2+4+6+8+... upto n terms=%d",sum);
	return 0;
}
