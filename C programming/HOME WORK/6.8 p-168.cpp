#include<stdio.h>
int main()
{
	int a,m;
	float net;
	printf("Enter 1. if it is a mill cloth OR Enter 2. if it is a handloom item: ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("Enter purchase amount of product:- ");
			scanf("%d",&m);
			if(m>=0&&m<=100)
			{
				net=m;
			}
			else
			{
				if(m>=101&&m<=200)
				{
					net=m-(5.0/100)*m;
				}
				else
				{
					if(m>=201&&m<=300)
					{
						net=m-(7.5/100)*m;
					}
					else
					{
						net=m-(10.0/100)*m;
					}
				}
			}
			break;
		case 2:
			printf("Enter purchase amount of product:- " );
			scanf("%d",&m);
			if(m>=0&&m<=100)
			{
				net=m-(5.0/100)*m;
			}
			else
			{
				if(m>=101&&m<=200)
				{
					net=m-(7.5/100)*m;
				}
				else
				{
					if(m>=201&&m<=300)
					{
						net=m-(10.0/100)*m;
					}
					else
					{
						net=m-(15.0/100)*m;
					}
				}
			}
			break;
		default:
			printf("INVALID");
	}
	printf("\n The net amount to be paid is %f",net);
	return 0;
}
