#include<stdio.h>
int main()
{
	int n,x,y,r;
	printf("Please enter operation ");
	scanf("%d",&n);
	printf("Enter two Numbers\n");
	scanf("%d%d",&x,&y);
	switch(n)
	{
		case 1:
			r=x+y;
			break;
		case 2:
			r=x-y;
			break;
		case 3:
			r=x*y;
			break;
		case 4:
			r=x/y;
			break;
		case 5:
			r=x%y;
			break;
		default:
			printf("Invalid Operation\n");
	}
	printf("Result=%d\n",r);
	return 0;
}
