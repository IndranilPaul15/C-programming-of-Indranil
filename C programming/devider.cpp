#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter 1 for devision & 0 for modulus: ");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Enter two number: \n");
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)
		{
			printf("UNDEFINED\n");
		}
		else
		{
			if(a!=0&&b==0)
			{
				printf("UNDEFINED\n");
			}
			else
			{
				c=a/b;
				printf("Result=%d\n",c);
			}
		}
	}
	else
	{
		if(i==0)
		{
			printf("Enter two number: \n");
			scanf("%d%d",&a,&b);
			if(a==0&&b==0)
			{
				printf("UNDEFINED\n");
			}
			else
			{
				if(a!=0&&b==0)
				{
					printf("UNDEFINED\n");
				}
				else
				{
					if(a<b)
					{
						printf("Result=0\n");
					}
					else
					{
						c=a%b;
						printf("Result=%d\n",c);
					}
				}
			}
		}
		else
		{
			printf("Invalid Operation");
		}
		
	}
	return 0;
}
