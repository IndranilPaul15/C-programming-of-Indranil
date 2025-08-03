#include<stdio.h>
int main()
{
	/* Write a C program of a Simple Calculator. */
	char op;
	int x,y,r;
	printf("Please enter operation(+,-,*,/,%)\n");
	scanf("%c",&op);
	printf("Enter two Numbers\n");
	scanf("%d%d",&x,&y);
	switch(op)
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
