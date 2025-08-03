#include<stdio.h>
int main()
{
	int n=1,x;
	char i='a';
	printf("PLEASE ENTER ANY NUMBER BETWEEN 1 TO 26 \n");
	scanf("%d",&x);
	if(x>=1&&x<=26)
	{
		do
		{
		printf("VALUE OF %c IS %d\n",i,n);
		n++;
		i++;
		}
		while(n<=x);
	}
	else
	{
		printf("INVALID INPUT");
	}
	return 0;
}
