#include<stdio.h>
#include<math.h>
int main()
{
	float n , N ;
	printf("Please enter the value of n : ");
	scanf("%f",&n);
	N = n*(n-1)*(n-2)*...*1;
	printf("\nN factorial is equal to %f",N);
	return 0;
}
