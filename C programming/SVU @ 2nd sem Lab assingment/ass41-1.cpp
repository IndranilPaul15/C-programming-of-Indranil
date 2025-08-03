#include<stdio.h>
int main()
{
	int num,orgnum,rev=0,rem;
	printf("Enter the number :");
	scanf("%d",&num);
	orgnum=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==orgnum)
	{
		printf("%d is a palindrome number",orgnum);
	}
	else
	{
		printf("%d is not a palindrome number",orgnum);
	}
	return 0;
}
