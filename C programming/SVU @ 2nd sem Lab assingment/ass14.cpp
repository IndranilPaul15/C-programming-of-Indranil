#include<stdio.h>
int main()
{
	//Write a C program to divide one number by other and find the Quotient. 
	int a,b,quo,rem;
	printf (" Enter two numbers for divition :\n");
	scanf("%d%d",&a,&b);
	quo=a/b;
	rem=a%b;
	printf("Quotient is %d and Remainder is %d ",quo,rem);
	return 0;
}
