#include<stdio.h>
int main()
{
	// PROGRAME TO FIND THE LARGEST & THE SMALLEST INTEGER AMONG THE THREE NUMBERS
	int x, y, z ;
	printf("Enter three values of x , y , z\n"); 
	scanf("%d%d%d", &x,&y,&z);
	if(x>y)
    {
		if(x>z)
		{ 
		printf("\n%d is the greatest integer  " ,x);
		}
		else
		{
		printf("\n%d is the greatest integer " ,z); 
		}	
	}
    else
    {
		if(y>z)
		{ 
		printf("\n%d is the greatest integer ") ,y;
		}
		else
		{
		printf("\n%d is the greatest integer " ,z); 
		}	
	}
	if(x<y)

    {
		if(x<z)
		{ 
		printf("\n%d is the smallest integer  " ,x);
		}
		else
		{
		printf("\n%d is the smallest integer " ,z); 
		}	
	}

    else
    {
		if(y<z)
		{ 
		printf("\n%d is the smallest integer ") ,y;
		}
		else
		{
		printf("\n%d is the smallest integer " ,z); 
		}	
	}
	return 0;
}
