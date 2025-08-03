#include<stdio.h>
int main()
{
	int ac,n=1,i=1,password,code,a,m,M,tm=0,s=0;
	printf("Please enter your account number: ");
	scanf("%d",&ac);
	switch(ac)
	{
		case 9191261:
			while(n<=3)
			{
				printf("INPUT THE PASSWORD :\n");
				scanf("%d",&password);
				if(password==95193)
				{
					tm=100000;
					printf("SUCCESSFUL LOGIN, \nPresent balance is %d\n",tm);
					while(i<=3)
					{
						printf("INPUT YOUR 4 DIGIT PIN :\n");
						scanf("%d",&code);
						if(code==1234)
						{
							printf("ACCOUNT UNLOCKED..... \n");
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
							printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-i);
						}
						i++;
					}

					break;
				}				
				else
				{
					printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-n);
				}
				n++;
			}
			break;
		case 9170012:
			while(n<=3)
			{
				printf("INPUT THE PASSWORD :\n");
				scanf("%d",&password);
				if(password==45719)
				{
					tm=72000;
					printf("SUCCESSFUL LOGIN, \nPresent balance is %d\n",tm);
					while(i<=3)
					{
						printf("INPUT YOUR 4 DIGIT PIN :\n");
						scanf("%d",&code);
						if(code==5678)
						{
							printf("ACCOUNT UNLOCKED..... \n");
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
							printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-i);
						}
						i++;
					}

					break;
				}				
				else
				{
					printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-n);
				}
				n++;
			}
			break;
		case 9186170:
			while(n<=3)
			{
				printf("INPUT THE PASSWORD :\n");
				scanf("%d",&password);
				if(password==80297)
				{
					tm=34000;
					printf("SUCCESSFUL LOGIN, \nPresent balance is %d\n",tm);
					while(i<=3)
					{
						printf("INPUT YOUR 4 DIGIT PIN :\n");
						scanf("%d",&code);
						if(code==7777)
						{
							printf("ACCOUNT UNLOCKED..... \n");
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
							printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-i);
						}
						i++;
					}

					break;
				}				
				else
				{
					printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-n);
				}
				n++;
			}
			break;
		default:
			printf("Invalid Account \n");
	}
	return 0;
}
