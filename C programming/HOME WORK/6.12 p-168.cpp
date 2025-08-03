#include<stdio.h>
int main()
{
	float u,c;
	printf("Enter total consumed unit: ");
	scanf("%f",&u);
	if(u<125)
	{
		c=100;
	}
	else
	{
		if(u<=200)
		{
			c=u*0.80;
		}
		else
		{
			if(u<=300)
			{
				c=(u-200)*0.90+160;
			}
			else
			{
				if(u>300)
				{
					c=(u-300)*1+125;
				}
			}
		}
	}
	if(c>=400)
	{
		c=c+(c*0.15);
	}
	printf("Total Bill is %.2f Rs",c);
	return 0;
}
