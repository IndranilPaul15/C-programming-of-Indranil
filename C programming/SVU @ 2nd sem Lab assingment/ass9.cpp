#include<stdio.h>
int main()
{
	//Write a C program to calculate the Product of first ‘N’ natural numbers.
	int i,num,Prod=1;
	printf("Please Enter any Number till you want to calculate the Product: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		Prod=Prod*i;
	}
	printf("\nthe Product of first %d natural numbers is \n%d",num,Prod);
    return 0;
}
