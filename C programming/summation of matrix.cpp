#include<stdio.h>
int main()
{
	int a1,b1,a2,b2,r,c,rc[10][10],cf[10][10],sum[10][10];
	printf("ENTER ROW NUMBER for matrix 1: ");
	scanf("%d",&a1);
	printf("ENTER COLOUMN NUMBER for matrix 1: ");
	scanf("%d",&b1);
	printf("ENTER ELEMENTS :\n");
	for(r=0;r<a1;r++)
	{
		for(c=0;c<b1;c++)
		{
			scanf("%d",&rc[r][c]);
		}
		printf("\n");
	}
	printf("ENTER ROW NUMBER for matrix 2: ");
	scanf("%d",&a2);
	printf("ENTER COLOUMN NUMBER for matrix 2: ");
	scanf("%d",&b2);
	printf("ENTER ELEMENTS :\n");
	for(r=0;r<a2;r++)
	{
		for(c=0;c<b2;c++)
		{
			scanf("%d",&cf[r][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("SUM OF TWO MATRIXES:\n");
	for(r=0;r<a1;r++)
	{
		for(c=0;c<b2;c++)
		{
			sum[r][c]=rc[r][c]+cf[r][c];
			printf("%d\t",sum[r][c]);
		}
		printf("\n\n");
	}
	return 0;
}
