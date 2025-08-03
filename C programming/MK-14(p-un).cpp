#include<stdio.h>
int main()
{
int n,x;
printf("Please input value 1 for if not understand & 2 for if understand\n");
scanf("%d",&x);
if(x==1)
{
	printf("THEN  ,YOU ARE MENTAL");
}
else
{
	if(x==2)
	{
    	while(n>=0)
    	{
		printf("\n%d",n);
		n++;
    	}
	}
	else
	{
		printf("INVALID INPUT");
	}
}
return 0;
}
