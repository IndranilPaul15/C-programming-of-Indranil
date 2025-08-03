#include<stdio.h>
int main()
{
	//Write a C program to calculate the Sum of first ‘N’ natural numbers.
	int i,num,sum=0;
	printf("Please Enter any Number till you want to calculate the Sum: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("\nthe Sum of first %d natural numbers is \n%d",num,sum);
    return 0;
}
