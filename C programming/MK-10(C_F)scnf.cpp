#include<stdio.h>
int main()
{
	int c , f;
	printf("Please enter the Centigrade value := ");
	scanf("%d",&c);
	f= 1.8*c+32;
	printf("->is equal to %d Fahrenheit \nThank you",f);
	return 0;
}
