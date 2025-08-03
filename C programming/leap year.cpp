#include<stdio.h>
int main()
{
	int x;
	printf("Enter the YEAR\n");
	scanf("%d",&x);
	if(x%4==0)
	{
		printf("\n%d is a leap year",x);
	}
	else
	{
		printf("\n%d is not a leap year",x);
	}
	return 0;
}

