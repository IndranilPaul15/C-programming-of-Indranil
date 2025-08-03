#include<stdio.h>
int main()
{
	int n=1,x,sum=0;
	printf("Please Enter any Number : ");
	scanf("%d",&x);
	while(n<=x)
	{
		sum=sum+n;
		n++;
	}
	printf("sum=%d",sum);
 return 0;
}
