#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c, discriment,root1 ,root2;
printf(" Please enter the values of a , b, and c \n");
scanf("%f %f %f", &a , &b , &c );
discriment = b*b - 4*a*c ;
if (discriment < 0)
printf("\n\nROOTS ARE IMAGINARY\n");
else
{
	root1 = (-b + sqrt(discriment))/(2.0*a);
	root2 = (-b - sqrt(discriment))/(2.0*a);
	printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1,root2);
}
	return 0;
}
