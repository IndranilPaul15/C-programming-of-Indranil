#include<stdio.h>
int main()
{
	int x, y, z ;
	printf("Enter three values of x , y , z\n"); 
	scanf("%d%d%d", &x,&y,&z);
	if(x==y)
    {
		if(y==z)
		{ 
		printf("\nThree are equal " );
		}
		else
		{
			if(y>z)
			{ 
			printf("\n1st & 2nd are equal & %d is the greatest integer ",y);
			}
			else
			{
			printf("\n%d is the greatest integer ",z); 
			}	 
		}	
	}

    else
    {
		if(x==z)	
   		{
			if(x>y)
			{ 
			printf("\n1st & 3rd are equal and %d is the greatest integer  " ,x);
			}
			else
			{
			printf("\n%d is the greatest integer " ,y); 
			}	
	 	}
 		   else
  	    {
			if(y==z)
			{ 
				if(y>x)
				{ 
				printf("\n2nd & 3rd are equal and %d is the greatest integer  " ,y);
				}
				else
				{
				printf("\n%d is the greatest integer " ,x); 
				}	
			}
			else
			{
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
				if(x>y)
  			    {
					if(x<z)
					{ 
					printf("\n%d is the middle integer  " ,x);
					}
					else
					{
					  if(y>z)
				    	{
					 	printf("\n%d is the middle integer " ,y);
				    	}
				      else
				        {
				     	printf("\n%d is the middle integer " ,z);
					    }
					}	
				}
  				  else
   		    	 {
					if(y<z)
					{ 
					printf("\n%d is the middle integer ") ,y;
					}
					else
					{
						if(x>z)
						{ 
						printf("\n%d is the middle integer  " ,x);
						}
						else
						{
						printf("\n%d is the middle integer " ,z); 
						}	
					}		
				} 
			}	
	 	}
	}
	if(x==y)
    {
		if(y==z)
		{ 
		printf(" " );
		}
		else
		{
			if(y<z)
			{ 
			printf("\n1st & 2nd are equal & %d is the smallest integer ",y);
			}
			else
			{
			printf("\n%d is the smallest integer ",z); 
			}	 
		}	
	}

    else
    {
		if(x==z)	
   		{
			if(x<y)
			{ 
			printf("\n1st & 3rd are equal and %d is the smallest integer  " ,x);
			}
			else
			{
			printf("\n%d is the smallest integer " ,y); 
			}	
	 	}
 		   else
  	    {
			if(y==z)
			{ 
				if(y<x)
				{ 
				printf("\n2nd & 3rd are equal and %d is the smallest integer  " ,y);
				}
				else
				{
				printf("\n%d is the smallest integer " ,x); 
				}	
			}
			else
			{
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
			}
		}
    }
	return 0;
}
