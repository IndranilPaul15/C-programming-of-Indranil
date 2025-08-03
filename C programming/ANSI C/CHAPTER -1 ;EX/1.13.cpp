#include<stdio.h>
int main()
{
	int a,b=0,n,i;
	printf("Enter Number: ");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		a=n*(n-1);
		b=b+a;
	}
	printf("Answer = %d",b);
	return 0;
}
