#include<stdio.h>
int main()
{
	int i,j,r,a=1;
	printf("Enter Range: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a++);
		}
		printf("\n");
	}
	return 0;
}
