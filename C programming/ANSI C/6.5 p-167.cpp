#include<stdio.h>
int main()
{
	int m,p,c;
	printf("Enter marks in MATHEMATICS: ");
	scanf("%d",&m);
	printf("Enter marks in PHYSICS: ");
	scanf("%d",&p);
	printf("Enter marks in CHEMISTRY: ");
	scanf("%d",&c);
	if(m>=60&&p>=50&&c>=40&&m+p+c>=200||m+p>=150)
	{
		printf("You are eligible");
	}
	else
	{
		printf("\n\nYou not are eligible");
	}
	return 0;
}
