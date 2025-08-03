#include<stdio.h>
int main()
{
	float Kh , P , X ;
	printf("Please enter the value of Kh & P =\n");
	scanf("%f %f",&Kh,&P);
	X = P/Kh;
	printf("The molar fraction is %f " , X);
	return 0;
}
