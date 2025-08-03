#include<stdio.h>
int main()
{
	int i,j,n,a,x=1;
	printf("Enter Number: ");
	scanf("%d",&n);
	a=n%2;
	if(a==0)
	{
		n=n-1;
		for(i=1;i<=n-1; i=i+2)
		{
			for(j=i;j<=n;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d ",x++);
			}
			printf("\n");
		}
		for(i=1;i<=n;i+=2)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
			for(j=i;j<=n;j++)
			{
				printf("%d ",x++);
			}		
			printf("\n");
		}
	}
	else
	{
		for(i=1;i<=n-1; i=i+2)
		{
			for(j=i;j<=n;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d ",x++);
			}
			printf("\n");
		}
		for(i=1;i<=n;i+=2)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
			for(j=i;j<=n;j++)
			{
				printf("%d ",x++);
			}		
			printf("\n");
		}
	}
	return 0;
}
