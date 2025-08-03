#include<stdio.h>
int main()
{
	int x,y, *ptr;
	x=6;
	ptr= &x;
	y= *ptr;
	printf("\n Value of x is %d",x);
	printf("\n %d is stored at address %u",x,&x);
	printf("\n %d is stored at address %u",*&x,&x);
	printf("\n %d is stored at address %u",*ptr,ptr);
	printf("\n %d is stored at address %u",ptr,&ptr);
	printf("\n %d is stored at address %u",y,&y);
	*ptr=25;
	printf("\n Now value of X=%d",x);
	return 0;
}
