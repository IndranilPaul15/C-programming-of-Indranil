#include<stdio.h>
int main()
{
	/*TRIANGLE
	Here base=b,height=h ,a,b,c are sides */
	float a=7, b=15 , c=10 , h=5 , area , perimeter ;
	area=0.5*b*h;
	perimeter=a+b+c;             
	printf("Area of triangle=%f cm^2", area);
	printf("\n");
	printf("Perimeter of triangle=%f cm",perimeter);
	return 0;
}
