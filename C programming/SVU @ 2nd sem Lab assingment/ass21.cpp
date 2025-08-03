#include <stdio.h>
int main() 
{
	//Write a C program to find the sum of all digits of a number
    int num, dg, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0) 
	{
        dg=num%10; 
        sum=sum+dg; 
        num=num/10; 
    }
    printf("\nThe sum of digits of the entered number is %d\n", sum);
    return 0;
}

