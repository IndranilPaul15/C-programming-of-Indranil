#include<stdio.h>
int main()
{
	/* Write a C program to find smallest among three numbers.  */
	int a,b,c;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	printf("Enter number 3:");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\n smallest is %d",a);
		}
		else
		{
			printf("\n smallest is %d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n smallest is %d",b);
		}
		else
		{
			printf("\n smallest is %d",c);
		}
	}
	return 0;
}
