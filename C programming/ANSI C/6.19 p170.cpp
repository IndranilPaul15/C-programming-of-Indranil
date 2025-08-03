#include<stdio.h>
int main()
{
	int n,x;
	printf("1 for jan,2 for feb,3 for march ...\nPlease enter month number : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("january has 31 days");
			break;
		case 2:
			printf("Enter the YEAR\n");
			scanf("%d",&x);
			if(x%4==0)
			{
				printf("february has 29 days");
			}
			else
			{
				printf("february has 28 days");
			}
			break;
		case 3:
			printf("march has 31 days");
			break;
		case 4:
			printf("april has 30 days");
			break;
		case 5:
			printf("may has 31 days");
			break;
		case 6:
			printf("june has 30 days");
			break;
		case 7:
			printf("july has 31 days");
			break;
		case 8:
			printf("august has 31 days");
			break;
		case 9:
			printf("september has 30 days");
			break;
		case 10:
			printf("october has 31 days");
			break;
		case 11:
			printf("november has 30 days");
			break;
		case 12:
			printf("december has 31 days");
			break;
		default:
			printf("Invalid Operation\n");
	}
	return 0;
}
