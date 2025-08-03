#include <stdio.h>
int main() 
{
	//Write a C program to calculate the digit of Convergence.
    int n,sum=0,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0||sum>9) 
	{
        if(n==0) 
		{
			n=sum;
            sum=0;
            count++;
        }
        sum=sum+n%10;
        n=n/10;
    }
    printf("The digit of convergence is %d\n", sum);
    return 0;
}

