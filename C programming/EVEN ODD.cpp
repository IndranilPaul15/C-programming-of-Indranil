#include<stdio.h>
int main()
{
	int x;
	printf("Enter the NUMBER\n");
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

