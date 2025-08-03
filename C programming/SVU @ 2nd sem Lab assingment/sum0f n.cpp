#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("Sum of %d elements is %d",num,sum);
	return 0;
}
