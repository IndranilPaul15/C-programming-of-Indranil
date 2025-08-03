#include<stdio.h>
int main()
{
	int x;
	printf("Enter the NUMBER\n");
	scanf("%d",&x);
	if(x!=0)
	{
		if(x>0)
		{
			printf("\n%d is a POSITIVE NUMBER",x);
		}
		else
		{
			printf("\n%d is an NEGATIVE NUMBER",x);
		}
	}
	else
	{
	printf("\n%d is N0T a POSITIVE or NEGATIVE NUMBER",x);
	}
	return 0;
}

