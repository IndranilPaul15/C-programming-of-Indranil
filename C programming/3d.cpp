#include<stdio.h>
int main()
{
	int a,b,r,c,rc,z,row_count[10][10][10],coloumn_count[10][10][10];
	printf("ENTER ROW NUMBER: ");
	scanf("%d",&a);
	printf("ENTER COLOUMN NUMBER: ");
	scanf("%d",&b);
	printf("ENTER hieght NUMBER: ");
	scanf("%d",&z);
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			for(rc=0;rc<z;rc++)
			{
				scanf("%d",&row_count[r][c][rc]);
			}
		}
	}
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			for(rc=0;rc<z;rc++)
			{
				printf("%d\t",row_count[r][c][rc]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
