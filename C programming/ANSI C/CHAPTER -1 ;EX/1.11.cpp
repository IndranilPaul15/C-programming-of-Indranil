#include<stdio.h>
int main()
{
	//write a programme to print sum of even numbers 
	int a,n,i,x=0;
	printf("Enter number: ");
	scanf("%d",&a);
	for(n=2;n<=a;n++)
	{
		i=n%2;
		if(i==0)
		{
			x=x+n;
		}
	}
	printf("sum of even up to %d is = %d\n",a,x);
	return 0;
}
