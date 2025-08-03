#include<stdio.h>
int main()
{
	int n,i=1,a=1,b=10;
	printf("Enter your number:");
	scanf("%d",&n);
	while(i>=0)
	{
		if(b>n&&n>=a)
		{
			printf("it is a %d digit number",i);
			break;
		}
		a=a*10,b=b*10;
		i++;
	}
return 0;
}
