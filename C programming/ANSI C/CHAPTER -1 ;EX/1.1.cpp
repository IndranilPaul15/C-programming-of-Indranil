#include<stdio.h>
int main()
{
	//AREA OF CIRCLE
	float R, pi= 3.141592653589793238 ,area;
	printf("ENTER RADIUS: ");
	scanf("%f",&R);
	area=pi*R*R;
	printf("\nArea of Circle=%f cm^2\n",area);
	return 0;
}
