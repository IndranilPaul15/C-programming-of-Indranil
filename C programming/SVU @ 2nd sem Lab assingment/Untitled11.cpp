#include<stdio.h>
int cal_hcf(int a, int b)
{
	int hcf,i;
	for( i=0;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			 hcf=i;
		}
	}
	return hcf;
}
int cal_lcm(int a,int b)
{
	int hcf,lcm;
	 hcf=cal_hcf(a,b);
	 lcm=(a*b)/hcf;
	return lcm;
}
int main()
{
	int num1,num2,hcf,lcm;
	printf("Enter two numbers \n");
	scanf("%d%d",&num1,&num2);
	hcf=cal_hcf(num1,num2);
	lcm= cal_lcm(num1,num2);
	printf("HCF and LCM of %d and %d are %d and %d ",num1,num2,hcf,lcm);
	return 0;
}
