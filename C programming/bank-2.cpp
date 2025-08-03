#include<stdio.h>
int main()
{
	int ac,n=1,password,a,m,M,tm=0,s=0;
	printf("Please Enter your account number: \n");
	scanf("%d",&ac);
	while(n<=3)
	{
		printf("INPUT THE PASSWORD :\n");
		scanf("%d",&password);
		if(password==7777)
		{
			printf("SUCCESSFUL LOGIN, \n");
			printf("Do you want to deposite money? enter 1 for yes and 0 for no\n");
			scanf("%d",&a);
			if(a==1)
			{
				printf("Please enter money amount\n");
				scanf("%d",&M);
				tm=tm+M;
				printf("Your account number : %d \nPresent balance is %d\n",ac,tm);
			}
			else
			{
				printf("Thank You\n");
			}
			printf("Do you want to withdraw money? enter 1 for yes and 0 for no\n");
			scanf("%d",&a);
			if(a==1)
			{
				printf("Please enter money amount\n");
				scanf("%d",&m);
				if(tm>m)
				{
					s=tm-m;
					printf("Your account number : %d \nPresent balance is %d\n",ac,s);
				}
				else
				{
					printf("YOU DONT HAVE THIS MUCH MONEY \n");
				}
			}	
			else
			{
				printf("Thank You\n");
			}
			break;
		}
		else
		{
			printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-n);
		}
		n++;
	}
	return 0;
}
