#include<stdio.h>
int main()
{
	//compound interest
	int n,i;
	float p,r,t,ci,a;
	printf("Please enter principle amount, rate of interest, total time & no of time interest got compounded per year: \n");
	scanf("%f%f%f%d",&p,&r,&t,&n);
	a=p;
	for(i=0;i<=n*t;i++)
	{
		a=a+a*(r/(n*100));
	}
	ci=a-p;
	printf("compound interest is %d\n final amount is %d",ci,a);
	return 0;
}
