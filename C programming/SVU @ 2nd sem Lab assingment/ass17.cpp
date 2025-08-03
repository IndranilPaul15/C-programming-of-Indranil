#include<stdio.h>
int main()
{
	/*  Write a C program to print Pascal Triangle.*/
   int row, coef=1, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &row);
   for (i=0;i<row;i++) 
   {
      for (j=i;j<=row;j++)
      {
      	printf(" ");
	  }
      for (j=0;j<=i;j++) 
	  {
        if (j==0||i==0)
        {
        	coef=1;
		}
        else
		{
			coef=coef*(i-j+1)/j;
		}  
		printf(" %d", coef);
      }
      printf("\n");
   }
   return 0;
}

