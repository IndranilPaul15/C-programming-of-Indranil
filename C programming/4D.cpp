#include<stdio.h>
int main()
{
	int a,b,r,c,rc,i,j,z,row_count[10][10][10][10],coloumn_count[10][10][10][10];
	printf("ENTER ROW NUMBER: ");
	scanf("%d",&a);
	printf("ENTER COLOUMN NUMBER: ");
	scanf("%d",&b);
	printf("ENTER hieght NUMBER: ");
	scanf("%d",&z);
	printf("ENTER hieght NUMBER: ");
	scanf("%d",&j);
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			for(rc=0;rc<z;rc++)
			{
				for(i=0;i<j;i++)
				{
					scanf("%d",&row_count[r][c][rc][i]);
				}
			}
		}
	}
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			for(rc=0;rc<z;rc++)
			{
				
				for(i=0;i<j;i++)
				{
					printf("%d\t",row_count[r][c][rc][i]);
				}
			}
		}
		printf("\n\n");
	}
	return 0;
}
