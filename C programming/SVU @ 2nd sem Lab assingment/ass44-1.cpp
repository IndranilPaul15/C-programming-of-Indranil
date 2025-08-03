#include<stdio.h>
int cal_hcf(int a,int b);
int cal_lcm(int a,int b);
int main()
{
	int num1,num2,hcf,lcm;
	printf("Enter two numbers :\n");
	scanf("%d%d",&num1,&num2);
	hcf=cal_hcf(num1,num2);
	lcm=cal_lcm(num1,num2);
	printf("The HCF of %d and %d is %d",num1,num2,hcf);
	printf("The LCM of %d and %d is %d",num1,num2,lcm);
	return 0;
}
int cal_hcf(int a,int b)
{
	int hcf;
	for(int i=0;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;;
		}
	}
	return hcf;
}
int cal_lcm(int a,int b)
{
	int hcf=cal_hcf(a,b);
	int lcm=(a*b)/hcf;
	return lcm;
}
