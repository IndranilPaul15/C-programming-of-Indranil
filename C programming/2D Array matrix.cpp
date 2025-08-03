#include<stdio.h>
int main()
{
	int a,b,r,c,row_count[10][10],coloumn_count[10][10];
	printf("ENTER ROW NUMBER: ");
	scanf("%d",&a);
	printf("ENTER COLOUMN NUMBER: ");
	scanf("%d",&b);
	printf("Enter elements");
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			scanf("%d",&row_count[r][c]);
			
		}
	}
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			printf("%d\t",row_count[r][c]);
		}
		printf("\n\n");
	}
	return 0;
}
