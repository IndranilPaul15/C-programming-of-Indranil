#include<stdio.h>
int main()
{
	int num1, num2, add, sub, multi, dev1, dev2;
	printf("Please enter the value of number1 & number2= \n");
	scanf("%d%d",&num1,&num2);
	add=num1+num2,sub=num1-num2,multi=num1*num2,dev1=num1/num2,dev2=num1%num2 ;
	printf(" \nSUM=%d \nSUB=%d \nMULTIPLICATION=%d \nQUOTIENT=%d \nREMAINDER=%d", add , sub , multi , dev1 , dev2);
	return 0;
}
