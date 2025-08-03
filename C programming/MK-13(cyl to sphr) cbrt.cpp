#include<stdio.h>
#include<math.h>
int main()
{
	float pi= 3.1416 ,r,h,R, radius_of_cylinder = r  , height_of_cylinder = h , radius_of_sphere = R, volume ;
	printf("\nPlease enter the value of the redius of cylinder :");
	scanf("%f", &r);
	printf("\nPlease enter the value of the height of cylinder :");
	scanf("%f", &h);
	volume = pi*r*r*h;
	printf("\nThe volume of the cylinder is  %f cm^3",volume);
	R = cbrt((3*volume)/(4*pi));
	printf("\n\n\aTHE RADIUS OF THE SPHERE WILL BE : %f cm", R );
	return 0;
}
