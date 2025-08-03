#include<stdio.h>
int main()
{
	/* Write a C program to find maximum between two numbers */
	int a,b;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\nMaxmimum is %d",a);
	}
	else
	{
		printf("\nMaxmimum is %d",b);
	}
	return 0;
}
