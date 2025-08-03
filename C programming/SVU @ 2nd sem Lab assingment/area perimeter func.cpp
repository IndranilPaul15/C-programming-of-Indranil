#include<stdio.h>
#define pi 3.14
float peri(float r)
{
	float peri =2*pi*r;
	return peri;
}
float area(float r)
{
	float area=pi*r*r;
	return area;
}
float vol(float r)
{
	float vol=(4/3)*pi*r*r*r;
	return vol;
}
int main()
{
	float r;
	printf("Enter Radius : ");
	scanf("%f",&r);
	printf("Perimetre of circle %.2f\n",peri(r));
	printf("Area of circle %.2f\n",area(r));
	printf("Volume of circle %.2f\n",vol(r));
	return 0;
}
