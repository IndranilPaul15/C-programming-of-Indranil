#include<stdio.h>
int main()
{
	// program to print reverse of number
	int n,i,x;
	printf("Please enter your number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		x=n%10;
		i=i*10+x;
		n=n/10;
	}
	printf("REVERSE OF INPUT NUMBER IS %d",i);
	return 0;
}
