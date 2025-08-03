#include<stdio.h>
int main()
{
	int n,x,y=1,z;
	printf("Please enter 1 for factorial operation & 2 for even-odd operation\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Please Enter any Number : ");
			scanf("%d",&x);
			for(n=1;n<=x;n++)
			{
				y=y*n;
			}
			printf("FACTORIAL OF THE %d=%d",x,y);
			break;
		case 2:
			printf("Enter the NUMBER\n");
			scanf("%d",&z);
			if(z%2==0)
			{
				printf("\n%d is an EVEN NUMBER",z);
			}
			else
			{
				printf("\n%d is an ODD NUMBER",z);
			}
			break;
		default:
			printf("Invalid Operation\n");
	}
	return 0;
}
