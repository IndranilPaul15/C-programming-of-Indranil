#include<stdio.h>
int main()
{
	int n,a,b,x,y,i;
	printf("Enter your 3 digit number:");
	scanf("%d",&n);
	a=n/100,x=n%100,b=x/10,y=x%10;
	i=a+b+y;
	printf("sum of digit is: %d",i);
	return 0;
}
