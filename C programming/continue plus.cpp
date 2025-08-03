#include<stdio.h>
int main()
{
	int a,b,c,i,n,x;
	printf("Enter two number: \n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Result=%d\n",c);
	for(n=1;n>0;n++)
	{
		printf("Enter 1 for continue & 0 for exit: \n");
		scanf("%d",&i);
		if(i==1)
		{
			printf("Enter number: ");
			scanf("%d",&x);
			c=c+x;
			printf("Result=%d\n",c);
		}
		else
		{
			printf("Thank You");
			break;
		}		
	}
	return 0;
}
