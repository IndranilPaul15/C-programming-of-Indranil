#include<stdio.h>
int main()
{
	float n,a,b,i=0;
	printf("Please Enter HOW MANY Numbers YOU WANT TO INPUT:\n");
	scanf("%f",&a);
	printf("please enter positive numbers\n");
	for(n=1;n<=a;n++)
	{
		scanf("%f",&b);
		if(i<b)
		{
			i=b;
		}
	}
	printf("LARGEST NUMBER OF THE AVOBE IS: %f",i);
	return 0;
}
