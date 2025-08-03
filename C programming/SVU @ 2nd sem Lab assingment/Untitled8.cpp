#include<stdio.h>
int cal_hcf(int num1,int num2);
int cal_lcm(int num1,int num2);
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
int cal_hcf(int num1,int num2)
{
	int hcf;
	for(int i=0;i<=num1&&i<=num2;i++)
	{
		if(num1%i==0&&num2%i==0)
		{
			hcf=i;;
		}
	}
	return hcf;
}
int cal_lcm(int num1,int num2)
{
	int hcf=cal_hcf(num1,num2);
	int lcm=(num1*num2)/hcf;
	return lcm;
}
