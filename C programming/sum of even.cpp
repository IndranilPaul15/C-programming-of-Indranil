#include<stdio.h>
int main()
{
	//write a programme to print sum of even numbers 1 to 10
	int n,i,x=0;
	for(n=2;n<=10;n++)
	{
		i=n%2;
		if(i==0)
		{
			x=x+n;
		}
	}
	printf("sum of even up to 10 is = %d\n",x);
	return 0;
}
