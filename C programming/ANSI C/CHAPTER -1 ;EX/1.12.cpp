#include<stdio.h>
int main()
{
	int a=1,b=0,n,i;
	printf("Enter Number: ");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		a=a*n;
		b=b+a;
	}
	printf("Answer = %d",b);
	return 0;
}
