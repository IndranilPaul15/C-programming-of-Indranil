#include<stdio.h>
int fact(int a)
{
	int facto=1;
	for(int i=1;i<=a;i++)
	{
		facto=facto*i;
	}
	return facto;
}
int main()
{
	int num,orgnum,rem,result=0,n=0;
	printf("Enter number");
	scanf("%d",&num);
	orgnum=num;
	while(orgnum!=0)
	{
		rem=orgnum%10;
		result=result+fact(rem);
		orgnum=orgnum/10;
	}
	if(result==num)
	{
		printf("%d is peterson number",num);
	}
	else
	{
		printf("%d is not peterson number",num);
	}
	return 0;
}
