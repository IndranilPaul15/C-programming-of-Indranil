#include<stdio.h>
int rev(int num)
{
	int rem,rev=0;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("\nReverse of %d is %d",num,rev(num));
	return 0;
}
