#include<stdio.h>
int main()
{
	//simple interest
	int p,r,t,s,a;
	printf("Please enter principle, rate of interest and years: \n");
	scanf("%d %d %d",&p,&r,&t);
	s=(p*r*t)/100;
	a=p+s;
	printf("simple interest is %d\n final amount is %d",s,a);
	return 0;
}
