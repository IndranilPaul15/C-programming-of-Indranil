#include<stdio.h>
int main()
{
	//Write a C program to calculate the average of three numbers.
	float a,b,c,av;
	printf (" Enter three numbers for average :\n");
	scanf("%f%f%f",&a,&b,&c);
	av=(a+b+c)/3;
	printf("Average of %.1f , %.1f and %.1f is \n%.2f",a,b,c,av);
	return 0;
}
