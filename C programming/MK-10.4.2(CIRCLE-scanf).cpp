#include<stdio.h>
int main()
{
	//CIRCLE
	float R , pi= 3.141592653589793238 ,area,perimeter;
	printf("Please enter the value of R =");
	scanf("%f",&R);
	perimeter=2*pi*R ,area=pi*R*R;
	printf(" Area of Circle=%f cm^2 \a \n Perimeter of Circle=%f cm",area , perimeter);
	return 0;
}

