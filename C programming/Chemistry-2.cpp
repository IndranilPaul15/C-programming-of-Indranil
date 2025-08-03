#include<stdio.h>
#include<math.h>
int main()
{
	double Rate_constant, initial_concentration , x , Time;
	printf("Please enter the value of Rate_constant & x (where it is reducing the initial concentration of the reactant to its 1/x th value) =\n");
	scanf("%f %f",&Rate_constant,&x);
	Time = ((2.303/Rate_constant)*log(initial_concentration/(initial_concentration/x)));
	printf("\nTo reduce the value it will take %f seconds" ,Time);
	return 0;
}
