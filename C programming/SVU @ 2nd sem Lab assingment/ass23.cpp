#include <stdio.h>
int main() 
{
    int cnum, powr;
    float amount;
    printf("Enter the customer number: ");
    scanf("%d", &cnum);
    printf("Enter the power consumed (in units): ");
    scanf("%d", &powr);
    if (powr <= 200&&powr>=0) 
	{
        amount = powr * 0.5;
    } 
	else 
	{
		if (powr <= 400&&powr>=201) 
		{
   	     amount = 100 + (powr - 200) * 0.65;
   		} 
		else 
		{
			if (powr<=600&&powr>=401) 
			{
  	    	  amount = 230 + (powr - 400) * 0.8;
  			} 
			else 
			{
 	    	   amount = 390 + (powr - 600) * 1.0;
			}
		}
	}
    printf("\nThe amount to be paid by customer %d is Rs %.2f\n", cnum, amount);
    return 0;
}

