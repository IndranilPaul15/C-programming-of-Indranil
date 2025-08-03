#include<stdio.h>
int main()
{
	//Write a C program to find whether a given number is Even or Odd.
	int x;
	printf("Enter the NUMBER to find whether it is Even or Odd.\n");
	scanf("%d",&x);
	if(x%2==0)
	{
	printf("\n%d is an EVEN NUMBER",x);
	}
	else
	{
	printf("\n%d is an ODD NUMBER",x);
	}
	return 0;
}

