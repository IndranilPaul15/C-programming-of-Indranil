#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of X :- ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("Y = 1");
	}
	else
	{
		if(x==0)
		{
			printf("Y = 0");
		}
		else
		{
			printf("Y = -1");
		}
	}
	return 0;
}
