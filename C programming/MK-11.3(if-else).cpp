
#include<stdio.h>
int main()
{
	int x,y,z ;
	printf("Enter three values of x , y , z\n"); 
	scanf("%d%d%d", &x,&y,&z);
	if(x<y)
	{ 
	printf("\nx is the smallest integer");
    }
    else
    {
		if(y<z)
		{ 
		printf("\ny is the smallest integer");
		}
		else
		{
		printf("\nz is the smallest integer"); 
		}	
	}
	if(x>y)
	{ 
	printf("\nx is the middle integer");
    }
    else
    {
		if(y<z)
		{ 
		printf("\ny is the middle integer");
		}
		else
		{
		printf("\nz is the middle integer"); 
		}	
	}
	if(x>y)
	{ 
	printf("\nx is the greatest integer");
    }
    else
    {
		if(y>z)
		{ 
		printf("\ny is the greatest integer");
		}
		else
		{
		printf("\nz is the greatest integer"); 
		}	
	}
	return 0;
}
