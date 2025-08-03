#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("The numbers before swap %d , %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("The numbers before swap %d , %d\n",a,b);
	return 0;
}
