#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}
