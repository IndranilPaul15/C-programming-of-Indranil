#include<stdio.h>
int main()
{
	char i;
	int x,y,r;
	printf("Please enter operation(+,-,*,/,%)\n");
	scanf("%c",&i);
	printf("Enter two Numbers\n");
	scanf("%d%d",&x,&y);
	switch(i)
	{
		case '+':
			r=x+y;
			break;
		case '-':
			r=x-y;
			break;
		case '*':
			r=x*y;
			break;
		case '/':
			r=x/y;
			break;
		case '%':
			r=x%y;
			break;
		default:
			printf("Invalid Operation\n");
	}
	printf("Result=%d\n",r);
	return 0;
}
