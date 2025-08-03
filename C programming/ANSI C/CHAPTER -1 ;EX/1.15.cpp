#include<stdio.h>
int main()
{
	int a=1,b=0,i,n,x;
	printf("Enter Number: ");
	scanf("%d",&x);
	while(a<=x)
	{
		n=0,i=2;
		while(i<=a/2)
		{
			if(a%i==0)
			{
				n++;
				break;
			}
			i++;
		}
		if(n==0&&a!=1)
		{
			b=b+a;
		}
		a++;
	}
	printf("Answer = %d",b);
	return 0;
}
