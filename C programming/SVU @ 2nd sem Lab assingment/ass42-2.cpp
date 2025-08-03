#include<stdio.h>
int rev(int num,int revnum)
{
	if(num==0)
	{
		return revnum;
	}
	return rev(num/10,(revnum*10)+(num%10));
}
int main()
{
	int num,revnum;
	printf("Enter the number :");
	scanf("%d",&num);
	revnum=rev(num,0);
	printf("\nReverse of %d is %d",num,revnum);
	return 0;
}
