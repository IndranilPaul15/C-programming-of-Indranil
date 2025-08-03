#include<stdio.h>
int main()
{
	int year;
	printf("PLEASE ENTER YOUR YEAR  :");
	scanf("%d",&year);
	if(year==1)
	{
		printf("you have total 2 semisters");
	}
	else
	{
		if(year==2)
		{
			printf("you have total 4 semisters");
		}
		else
		{
			if(year==3)
			{
				printf("you have total 6 semisters");
			}
			else
			{
				if(year==4)
				{
					printf("you have total 8 semisters");
				}
				else
				{
					printf("INVALID INPUT");
				}
			}
		}
	}
	return 0;
}
