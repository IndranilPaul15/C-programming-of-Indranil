#include<stdio.h>
int main()
{
	float n,a,b,y=0;
	printf("Please Enter HOW MANY Numbers YOU WANT TO INPUT:\n");
	scanf("%f",&a);
	printf("enter numbers\n");
	for(n=1;n<=a;n++)
	{
		scanf("%f",&b);
		y=(y+b);
	}
		y=y/a;
	printf("AVERAGE OF THE INPUT NUMBERS=%f",y);
    return 0;
}
