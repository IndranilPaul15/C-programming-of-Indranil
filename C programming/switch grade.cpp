#include<stdio.h>
int main()
{
	int n,x;
	printf("Please enter marks ");
	scanf("%d",&x);
	n=x/10;
	switch(n)
	{
		case 10:
			if(x>100)
			{
				printf("invalid");
			}
			else
			{
				printf("Grade= O \n");
				
			}
			break;
		case 9:
			printf("Grade= A \n");
			break;
		case 8:
			printf("Grade= B \n");
			break;
		case 7:
			printf("Grade= C \n");
			break;
		case 6:
			printf("Grade= D \n");
			break;
		case 5:
			printf("Grade= E \n");
			break;
		default:
			printf("Grade= F \n");
	}
	return 0;
}
