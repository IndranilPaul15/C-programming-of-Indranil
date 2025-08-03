#include<stdio.h>
int main()
{
	int n,x;
	printf("Please input value 1 for if poisoned & 0 for if not poisoned\n\a");
	scanf("%d",&x);
	do
	{
		if(x==1)
		{
			printf("EATEN %dtime\nFOOD IS POISONED\nSTOP EATING...",n+1);
			break;
		}
		else
		{
			if(x==0)
			{
				printf("EATEN %dtime\nFOOD IS NOT POISONED\n",n+1);
			}
			else
			{
				printf("INVALID INPUT\n\a");
				break;
			}
		}
		n++;
	}
	while(n<=2);
	return 0;
}
