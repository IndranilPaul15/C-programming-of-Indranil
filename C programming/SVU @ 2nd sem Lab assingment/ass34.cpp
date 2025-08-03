#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc,r1,r2,rp,ip;
	printf("Enter the coefficients a,b,&c\n");
	scanf("%f%f%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0)
	{
		r1=(-b+sqrt(disc))/2*a;
		r2=(-b-sqrt(disc))/2*a;
		printf("The roots are real \n root1=%.2f & root2=%.2f",r1,r2);
	}
	else
	{
		if(disc==0)
		{
			r1=r2=-b/2*a;
			printf("The roots are real and equal \n root1=root2=%.2f",r1);
		}
		else
		{
			rp=-b/2*a;
			ip=sqrt(-disc)/2*a;
			printf("The roots are complex \n root1=%.2f+%.2fi & root2=%.2f-%.2fi",rp,ip,rp,ip);
		}
	}
	return 0;
}
