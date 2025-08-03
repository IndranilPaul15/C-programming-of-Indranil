#include<stdio.h>
int main()
{
	int i,j,r,a,b;
	printf("Enter Range: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		if(i%2==0)
		{
			a=1;b=0;
		}
		else
		{
			a=0;b=1;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d ",a);	
			}
			else
			{
				printf("%d ",b);
			}
		}
		printf("\n");
	}
	return 0;
}
