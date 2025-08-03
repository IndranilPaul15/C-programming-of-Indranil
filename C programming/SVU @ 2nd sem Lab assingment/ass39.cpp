#include<stdio.h>
int main()
{
	int start ,end,i,sum=0;
	printf("Enter start point: ");
	scanf("%d",&start);
	printf("Enter end point: ");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("\nYour desired sum=%d",sum);
	return 0;
}
