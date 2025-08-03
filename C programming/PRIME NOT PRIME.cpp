#include<stdio.h>
int main()
{
	int x;
	printf("Enter the NUMBER\n");
	scanf("%d",&x);
	if(x%2&&x%3&&x%5&&x%7!=0)
	{
		printf("\n%d is a PRIME NUMBER",x);
	}
	else
	{
		if(x==2||x==3||x==5||x==7)
		{
			printf("\n%d is a PRIME NUMBER",x);
		}
		else
		{
			printf("\n%d is a NOT PRIME NUMBER",x);
		}
	}
	return 0;
}

