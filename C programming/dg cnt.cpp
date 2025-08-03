#include<stdio.h>
int main()
{
	int n;
	printf("Enter your number:");
	scanf("%d",&n);	
	if(1000>n&&n>=100)
	{
		printf("it is a 3 digit number");
	}
	else
	{
		if(100>n&&n>=10)
		{
			printf("it is a 2 digit number");
		}
		else
		{
			if(10>n&&n>=0)
			{
				printf("it is a 1 digit number");
			}
			else
			{
				printf("it is above 3 digit number");
			}
		}
	}
	return 0;
}
