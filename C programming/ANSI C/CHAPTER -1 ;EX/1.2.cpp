#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,x,y;
	printf("Enter coefficients a,b&c :\n");
	scanf("%d %d %d",&a,&b,&c);
	i=(b*b)-(4*a*c);
	if(i>0)
	{
		x=(-b+ sqrt(i))/(2*a);
		y=(-b- sqrt(i))/(2*a);
		printf("Roots are real & unequal\n Root1= %d \n Root2= %d",x,y);
	}
	else
	{
		if(i==0)
		{
			x=-b/(2*a);
			x==y;
			printf("Roots are real & equal\n Root1= Root2= %d",x);
		}
		else
		{
			printf("Roots are imaginary");
		}
	}
	return 0;
}
