#include<stdio.h>
int main()
{
	int n,i,j,flag=1;
	printf("Enter number:");
	scanf("%d",&n);
	for(i;i>=2;i--)
	{
		for( j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag==0;
				break;
			}
			
		}
		if(flag==1)
		{
			printf("%d, ",i);
		}
	}
	return 0;
}
